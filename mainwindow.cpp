#include "mainwindow.h"
#include "qrcode.hpp"
#include "smtp.h"
#include "ui_mainwindow.h"
#include <QPrinter>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Formation fa;
    ui->afficher->setModel(fa.afficher());

    Formateur f;
    ui->affichagef->setModel(f.afficher());

    //Controle de saisie
    ui->idi->setValidator(new QIntValidator(0,999999999));
    ui->idfor->setValidator(new QIntValidator(0,999999999));
    ui->nbr->setValidator(new QIntValidator(0,999999999));
    ui->CIN->setValidator(new QIntValidator(0,999999999));

    QRegularExpression rx("^[A-Za-z]+$");
    QValidator *validator = new QRegularExpressionValidator(rx, this);

    ui->nom->setValidator(validator);
    ui->prenom->setValidator(validator);
    ui->titref->setValidator(validator);
    QSqlQuery query;
    query.prepare("SELECT id_formation  FROM Formation");
    if(query.exec()){
        while (query.next()) {
            int id_entreprise = query.value(0).toInt();
            ui->comboBox_3->addItem(QString("%1").arg(id_entreprise));

        }}
    query.prepare("SELECT id_formateur  FROM Formateur");
    if(query.exec()){
        while (query.next()) {
            int id_entreprise = query.value(0).toInt();
            ui->comboBox_3->addItem(QString("%1").arg(id_entreprise));
            ui->idf->addItem(QString("%1").arg(id_entreprise));


        }}



}

MainWindow::~MainWindow()
{
    delete ui;
}

//FORMATION

void MainWindow::on_pushButton_clicked()//AJOUT
{
    QString titre=ui->titref->text();
    int duree=ui->dureef->value();
    QString idf=ui->idf->currentText();
    QString description=ui->descriptionf->toPlainText();
    QDate date_formation = ui->datef->date();
    int nbrp=ui->nbrp->value();
    int id=ui->idi->text().toInt();
   Formation fa(id,duree,titre,description,nbrp,date_formation,idf);
   if(fa.existance(ui->idi->text()))
   {
       bool test=fa.ajouter();
       if(test)
       {
           ui->afficher->setModel(fa.afficher());

           QMessageBox::information(nullptr, QObject::tr("ajout effuctué"),  QObject::tr("connection successful.\n" "Click Cancel to exit."), QMessageBox::Cancel);

       }
   }
   else
       QMessageBox::critical(nullptr, QObject::tr("ajout n'est pas effuctué"),QObject::tr("connection failed.\n"  "Click Cancel to exit."), QMessageBox::Cancel);


}

void MainWindow::on_pushButton_3_clicked()//SUPRRSSION
{
    int id=ui->idi->text().toInt();

        Formation fa;
        bool test1;
        test1 =fa.supprimer(id);
        if(test1)
        {
            ui->afficher->setModel(fa.afficher());

            QMessageBox::information(nullptr, QObject::tr("Suppression effectuée"),
                                     QObject::tr("connection successful.\n"
                                                 "Click Cancel to exit."), QMessageBox::Cancel);

        }
        else
            QMessageBox::critical(nullptr, QObject::tr("Suppression n'est pas effectuée"),
                                  QObject::tr("connection failed.\n"
                                              "Click Cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_pushButton_2_clicked()//MODIFICATION
{
    QString titre=ui->titref->text();
    int duree=ui->dureef->value();
    QString idf=ui->idf->currentText();
    QString description=ui->descriptionf->toPlainText();
    QDate date_formation = ui->datef->date();
    int nbrp=ui->nbrp->value();
    int id=ui->idi->text().toInt();
   Formation fa(id,duree,titre,description,nbrp,date_formation,idf);
        bool test=fa.modifier(id);
        if(test)
        {
            ui->afficher->setModel(fa.afficher());

            QMessageBox::information(nullptr, QObject::tr("modification effectuée"),  QObject::tr("connection successful.\n" "Click Cancel to exit."), QMessageBox::Cancel);

        }

        else
            QMessageBox::critical(nullptr, QObject::tr("modification n'est pas correcte"),   QObject::tr("check ajout .\n"  "Click Cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_afficher_activated(const QModelIndex &index)//AFFICHAGE
{
    QString val=ui->afficher->model()->data(index).toString();
        QSqlQuery qry;

        qry.prepare("select * from Formation where id_formation='"+val+" ' ");
        if(qry.exec())
        {
            while(qry.next())
            {
                ui->idi->setText(qry.value(0).toString());
                ui->titref->setText(qry.value(2).toString());
                ui->dureef->setValue(qry.value(1).toInt());
                ui->idf->setCurrentText(qry.value(4).toString());
                ui->descriptionf->setText(qry.value(3).toString());
                ui->datef->setDate(qry.value(6).toDate());
                ui->nbrp->setValue(qry.value(5).toInt());

            }

        }
        else
        {
            QMessageBox::critical(nullptr, QObject::tr("selection n'est pas effuctué"),  QObject::tr("connection failed.\n" "Click Cancel to exit."), QMessageBox::Cancel);
        }
        //QR CODE
        QString text ="id formation:\n"+ ui->afficher->model()->data(ui->afficher->model()->index(ui->afficher->currentIndex().row(),0)).toString()+
                       +"nom entreprise:\n "+ui->afficher->model()->data(ui->afficher->model()->index(ui->afficher->currentIndex().row(),1)).toString()
                       +"type entreprise\n: "+ui->afficher->model()->data(ui->afficher->model()->index(ui->afficher->currentIndex().row(),2)).toString()
                       +"date creation:\n "+ui->afficher->model()->data(ui->afficher->model()->index(ui->afficher->currentIndex().row(),7)).toString()
                       +"nombre employees max:\n "+ui->afficher->model()->data(ui->afficher->model()->index(ui->afficher->currentIndex().row(),3)).toString()
                       +"nombre employees actuelle: "+ui->afficher->model()->data(ui->afficher->model()->index(ui->afficher->currentIndex().row(),4)).toString();


        using namespace qrcodegen;
        QrCode qr = QrCode::encodeText( text.toUtf8().data(), QrCode::Ecc::MEDIUM );
        qint32 sz = qr.getSize();
        QImage im(sz,sz, QImage::Format_RGB32);
        QRgb black = qRgb(  0,  0,  0);
        QRgb white = qRgb(255,255,255);
        for (int y = 0; y < sz; y++)
            for (int x = 0; x < sz; x++)
                im.setPixel(x,y,qr.getModule(x, y) ? black : white );
        ui->qr->setPixmap( QPixmap::fromImage(im.scaled(100,100,Qt::KeepAspectRatio,Qt::FastTransformation),Qt::MonoOnly) );

}

void MainWindow::on_lineEdit_textChanged(const QString &arg1)//RECHERCHE
{
    Formation fa;
    ui->afficher->setModel(fa.rechercher(arg1));
}

void MainWindow::on_pushButton_7_clicked()//PDF
{
    QSqlQueryModel *model = qobject_cast<QSqlQueryModel*>(ui-> afficher->model());

    if (model) {
        QString content;
        for (int col = 0; col < model->columnCount(); ++col) {

            content += model->headerData(col, Qt::Horizontal).toString() + "\t ";

        }
        content += "\n";
        for (int row = 0; row < model->rowCount(); ++row) {
            for (int col = 0; col < model->columnCount(); ++col) {
                content += model->data(model->index(row, col)).toString() + "\t";
            }
            content += "\n";
        }

        QTextDocument document;
        document.setPlainText(content);
        QString fileName = QFileDialog::getSaveFileName(this, "Exporter en PDF", "info", "Fichiers PDF (*.pdf)");

        if (!fileName.isEmpty()) {
            QPrinter printer;
            printer.setOutputFormat(QPrinter::PdfFormat);
            printer.setOutputFileName(fileName);
            document.print(&printer);
            QMessageBox::information(this, "Export PDF", "Le PDF a été créé avec succès.");
        }
    }
}

void MainWindow::on_comboBox_activated(int index)//TRI
{
    QSqlQueryModel * model= new QSqlQueryModel();

    if (index==0)
        model->setQuery("select * from Formation order by duree_formation ");
    else if(index==1)
        model->setQuery("select * from Formation order by titre ");
    else
        model->setQuery("select * from Formation order by nbr_personne ");
    Formation f;
    ui->afficher->setModel(model);

}

float countType(QString ch)
{
    QSqlQueryModel* searchModel = new QSqlQueryModel();
    searchModel->setQuery("SELECT * FROM Formation WHERE DUREE_FORMATION  '%"+ch+"%' ");

    return searchModel->rowCount() ;
}

void MainWindow::on_stat_clicked()//STAT
{
    QList<QWidget*> childWidgets = ui->statform->findChildren<QWidget*>();
    for (QWidget* childWidget : childWidgets) {
        childWidget->deleteLater();

    }
    float s0, s1;
    s0 = countType(">5");
    s1 = countType("<=5");
    qDebug () << s0 ;
    float stat = s0 + s1  ;
    float x = (stat != 0) ? (s0 * 100) / stat : 0.0;
    float y = (stat != 0) ? (s1 * 100) / stat : 0.0;

    QString ch1 = QString(">5 %1%").arg(x);
    QString ch2 = QString("<=5 %1%").arg(y);

    QPieSeries *series=new QPieSeries();
    series->setHoleSize(0.35);



    QPieSlice *slice= series->append(ch1,x);
    slice->setLabelVisible();
    slice->setLabelColor(QColor(Qt::black));
    slice->setBrush(QColor(189, 76, 224, 1));
    QPieSlice *slice1= series->append(ch2,y);
    slice1->setLabelVisible();
    slice1->setLabelColor(QColor(Qt::black));
    slice1->setBrush(QColor(84, 16, 149, 1));


    QChart *chart=new QChart();
    chart->addSeries(series);
    chart->setAnimationOptions(QChart::SeriesAnimations);
    QBrush backgroundBrush(QColor(187,93,87,0));
    chart->setBackgroundBrush(backgroundBrush);
    QChartView *chartview=new QChartView(chart);
    chartview->setRenderHint(QPainter::Antialiasing);
    chartview->setFixedSize(ui->statform->size());
    chartview->setParent(ui->statform);
    ui->stackedWidget->setCurrentIndex(2);


}



//FORMATEUR

void MainWindow::on_pushButton_4_clicked()//AJOUT
{
    QString type=ui->typef->currentText();
    int nbr_formations_effectuees=ui->nbr->text().toInt();
    int idf=ui->idfor->text().toInt();

    QString nom = ui->nom->text();
    QString prenom=ui->prenom->text();
    int CIN=ui->CIN->text().toInt();
    QDate date_de_naiss=ui->dss->date();
   Formateur fa(idf,nbr_formations_effectuees,type,nom,prenom,CIN,date_de_naiss);
   if(fa.existance(ui->idi->text()))
   {
       bool test=fa.ajouter();
       if(test)
       {
           ui->affichagef->setModel(fa.afficher());

           QMessageBox::information(nullptr, QObject::tr("ajout effuctué"),  QObject::tr("connection successful.\n" "Click Cancel to exit."), QMessageBox::Cancel);

       }
   }
   else
       QMessageBox::critical(nullptr, QObject::tr("ajout n'est pas effuctué"),QObject::tr("connection failed.\n"  "Click Cancel to exit."), QMessageBox::Cancel);

}

void MainWindow::on_pushButton_6_clicked()//SUPRESSION
{
    int id=ui->idfor->text().toInt();

            Formateur fa;
            bool test1;
            test1 =fa.supprimer(id);
            if(test1)
            {
                ui->affichagef->setModel(fa.afficher());

                QMessageBox::information(nullptr, QObject::tr("Suppression formateur effectuée"),
                                         QObject::tr("connection successful.\n"
                                                     "Click Cancel to exit."), QMessageBox::Cancel);

            }
            else
                QMessageBox::critical(nullptr, QObject::tr("Suppression du formateur n'est pas effectuée"),
                                      QObject::tr("connection failed.\n"
                                                  "Click Cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_pushButton_5_clicked()//MODIFICATION
{
    QString type=ui->typef->currentText();
    int nbr_formations_effectuees=ui->nbr->text().toInt();
    int idf=ui->idfor->text().toInt();

    QString nom = ui->nom->text();
    QString prenom=ui->prenom->text();
    int CIN=ui->CIN->text().toInt();
    QDate date_de_naiss=ui->dss->date();
   Formateur fa(idf,nbr_formations_effectuees,type,nom,prenom,CIN,date_de_naiss);
        bool test=fa.modifier(idf);
        if(test)
        {
            ui->affichagef->setModel(fa.afficher());

            QMessageBox::information(nullptr, QObject::tr("modification effectuée"),  QObject::tr("connection successful.\n" "Click Cancel to exit."), QMessageBox::Cancel);

        }

        else
            QMessageBox::critical(nullptr, QObject::tr("modification n'est pas correcte"),   QObject::tr("check ajout .\n"  "Click Cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_affichagef_activated(const QModelIndex &index)//AFFICHAGE
{

    QString val=ui->affichagef->model()->data(index).toString();
        QSqlQuery qry;

        qry.prepare("select * from Formateur where id_formateur='"+val+" ' ");
        if(qry.exec())
        {
            while(qry.next())
            {
                ui->idfor->setText(qry.value(0).toString());
                ui->typef->setCurrentText(qry.value(1).toString());
                ui->nbr->setText(qry.value(2).toString());
                ui->nom->setText(qry.value(3).toString());
                ui->prenom->setText(qry.value(4).toString());
                ui->CIN->setText(qry.value(5).toString());
                ui->dss->setDate(qry.value(6).toDate());

            }

        }
        else
        {
            QMessageBox::critical(nullptr, QObject::tr("selection n'est pas effuctué"),  QObject::tr("connection failed.\n" "Click Cancel to exit."), QMessageBox::Cancel);
        }
}

void MainWindow::on_lineEdit_3_textChanged(const QString &arg1)//RECHERCHE
{
    Formateur fa;
    ui->affichagef->setModel(fa.rechercher(arg1));
}

void MainWindow::on_pdf_clicked()//PDF
{
    QSqlQueryModel *model = qobject_cast<QSqlQueryModel*>(ui->affichagef->model());

        if (model) {
            QString content;
            for (int col = 0; col < model->columnCount(); ++col) {

                content += model->headerData(col, Qt::Horizontal).toString() + "\t ";

            }
            content += "\n";
            for (int row = 0; row < model->rowCount(); ++row) {
                for (int col = 0; col < model->columnCount(); ++col) {
                    content += model->data(model->index(row, col)).toString() + "\t";
                }
                content += "\n";
            }

            QTextDocument document;
            document.setPlainText(content);
            QString fileName = QFileDialog::getSaveFileName(this, "Exporter en PDF", "info", "Fichiers PDF (*.pdf)");

            if (!fileName.isEmpty()) {
                QPrinter printer;
                printer.setOutputFormat(QPrinter::PdfFormat);
                printer.setOutputFileName(fileName);
                document.print(&printer);
                QMessageBox::information(this, "Export PDF", "Le PDF a été créé avec succès.");
            }
        }
    }

void MainWindow::on_comboBox_2_activated(int index)//TRI
    {
        QSqlQueryModel * model= new QSqlQueryModel();

        if (index==0)
            model->setQuery("select * from Formateur order by type_formateur ");
        else if(index==1)
            model->setQuery("select * from Formateur order by nbr_formations_effectuees ");
        else
            model->setQuery("select * from Formateur order by date_de_naiss ");
        Formateur f;
        ui->affichagef->setModel(model);
    }

float countTypef(QString ch)
    {
        QSqlQueryModel* searchModel = new QSqlQueryModel();
        searchModel->setQuery("SELECT * FROM Formateur WHERE type_formateur LIKE '%"+ch+"%' ");

        return searchModel->rowCount() ;
    }

void MainWindow::on_statf_clicked()//STAT
    {
    QList<QWidget*> childWidgets = ui->sformateur->findChildren<QWidget*>();
    for (QWidget* childWidget : childWidgets) {
        childWidget->deleteLater();

    }
    float s0, s1;
    s0 = countTypef("interne");
    s1 = countTypef("externe");
    qDebug () << s0 ;
    float stat = s0 + s1  ;
    float x = (stat != 0) ? (s0 * 100) / stat : 0.0;
    float y = (stat != 0) ? (s1 * 100) / stat : 0.0;

    QString ch1 = QString("interne %1%").arg(x);
    QString ch2 = QString("externe %1%").arg(y);

    QPieSeries *series=new QPieSeries();
    series->setHoleSize(0.35);



    QPieSlice *slice= series->append(ch1,x);
    slice->setLabelVisible();
    slice->setLabelColor(QColor(Qt::black));
    slice->setBrush(QColor(189, 76, 224, 1));
    QPieSlice *slice1= series->append(ch2,y);
    slice1->setLabelVisible();
    slice1->setLabelColor(QColor(Qt::black));
    slice1->setBrush(QColor(84, 16, 149, 1));


    QChart *chart=new QChart();
    chart->addSeries(series);
    chart->setAnimationOptions(QChart::SeriesAnimations);
    QBrush backgroundBrush(QColor(187,93,87,0));
    chart->setBackgroundBrush(backgroundBrush);
    QChartView *chartview=new QChartView(chart);
    chartview->setRenderHint(QPainter::Antialiasing);
    chartview->setFixedSize(ui->sformateur->size());
    chartview->setParent(ui->sformateur);
    ui->stackedWidget->setCurrentIndex(3);

    }


    void MainWindow::on_pushButton_8_clicked()
    {
        ui->stackedWidget->setCurrentIndex(0);
    }

    void MainWindow::on_pushButton_9_clicked()
    {
        ui->stackedWidget->setCurrentIndex(1);

    }

    void MainWindow::on_pushButton_12_clicked()
    {
        ui->stackedWidget->setCurrentIndex(4);
    }


    void MainWindow::on_pushButton_10_clicked()
    {
                sendMail();
    }


    void MainWindow::mailSent(QString status)
    {
        if(status == "Message sent")
            QMessageBox::warning( 0, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );
    }

    void MainWindow::sendMail()
    {

                Smtp* smtp = new Smtp("mail", "ftsszztbqqaidtgp", "smtp.gmail.com", 465);
                connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));
                smtp->sendMail(ui->mail->text(), ui->mail->text(),ui->titref->text(),ui->descriptionf->toPlainText());

    }



