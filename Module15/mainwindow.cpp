#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QString>
#include<QVector>
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QVector <QString> currency{"BYN","RUB","EUR","USD"};
    for(auto const number:currency){
        ui->comboBox->addItem(number);
        ui->comboBox_2->addItem(number);
    }
    connect(ui->convertButton,QPushButton::clicked,this,&MainWindow::handleConvertButtonClicked);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleConvertButtonClicked()
{
    auto curren1=ui->comboBox->currentText();
    auto curren2=ui->comboBox_2->currentText();

        if(curren1== "BYN")
    {
        if (curren2=="BYN")
        {
             auto amount=ui->lineEdit->text().toDouble();
            IsValidNumber(amount);
             ui->label->setText(QString::number(amount,'g',6));
        }
        else if (curren2=="EUR")
        {
            auto amount=ui->lineEdit->text().toDouble();
            IsValidNumber(amount);
            amount*=KOEF_BYN_IN_EUR;
            ui->label->setText(QString::number(amount,'g',6));

        }
        else if (curren2=="USD")
        {
            auto amount=ui->lineEdit->text().toDouble();
            IsValidNumber(amount);
             amount*=KOEF_BYN_IN_USD;
            ui->label->setText(QString::number(amount,'g',6));

        }
        else if (curren2=="RUB")
        {
            auto amount=ui->lineEdit->text().toDouble();
            IsValidNumber(amount);
             amount*=KOEF_BYN_IN_RUB;
            ui->label->setText(QString::number(amount,'g',6));

        }
        else{

            QMessageBox::warning(this,"","ERROR!");
        }


     }
    else if(curren1=="USD")
    {

            if (curren2=="BYN")
            {
                auto amount=ui->lineEdit->text().toDouble();
               IsValidNumber(amount);
                amount*=KOEF_USD_IN_BYN;
                ui->label->setText(QString::number(amount,'g',6));
            }
            else if (curren2=="EUR")
            {
                auto amount=ui->lineEdit->text().toDouble();
                IsValidNumber(amount);
                amount*=KOEF_USD_IN_EUR;
                ui->label->setText(QString::number(amount,'g',6));

            }
            else if (curren2=="USD")
            {
                auto amount=ui->lineEdit->text().toDouble();
                IsValidNumber(amount);
                ui->label->setText(QString::number(amount,'g',6));

            }
            else if (curren2=="RUB")
            {
                auto amount=ui->lineEdit->text().toDouble();
                IsValidNumber(amount);
                amount*=KOEF_USD_IN_RUB;
                ui->label->setText(QString::number(amount,'g',6));

            }
            else{

                QMessageBox::warning(this,"","ERROR!");
            }
    }
     else if(curren1=="EUR"){

         if (curren2=="BYN")
         {
             auto amount=ui->lineEdit->text().toDouble();
            IsValidNumber(amount);
             amount*=KOEF_EUR_IN_BYN;
             ui->label->setText(QString::number(amount,'g',6));
         }
         else if (curren2=="EUR")
         {
             auto amount=ui->lineEdit->text().toDouble();
             ui->label->setText(QString::number(amount,'g',6));

         }
         else if (curren2=="USD")
         {
             auto amount=ui->lineEdit->text().toDouble();
             IsValidNumber(amount);
             amount*=KOEF_EUR_IN_USD;
             ui->label->setText(QString::number(amount,'g',6));

         }
         else if (curren2=="RUB")
         {
             auto amount=ui->lineEdit->text().toDouble();
             IsValidNumber(amount);
             amount*=KOEF_EUR_IN_RUB;
             ui->label->setText(QString::number(amount,'g',6));

         }
         else{

             QMessageBox::warning(this,"","ERROR!");
         }

    }
    else if(curren1=="RUB"){

        if (curren2=="BYN")
        {

            auto amount=ui->lineEdit->text().toDouble();
           IsValidNumber(amount);
            amount*=KOEF_RUB_IN_BYN;
            ui->label->setText(QString::number(amount,'g',6));
        }
        else if (curren2=="EUR")
        {
            auto amount=ui->lineEdit->text().toDouble();
            IsValidNumber(amount);
            amount*=KOEF_RUB_IN_EUR;
            ui->label->setText(QString::number(amount,'g',6));

        }
        else if (curren2=="USD")
        {
            auto amount=ui->lineEdit->text().toDouble();
            IsValidNumber(amount);
            amount*=KOEF_RUB_IN_USD;
            ui->label->setText(QString::number(amount,'g',6));

        }
        else if (curren2=="RUB")
        {
            auto amount=ui->lineEdit->text().toDouble();
            IsValidNumber(amount);
            ui->label->setText(QString::number(amount,'g',6));

        }
        else{

            QMessageBox::warning(this,"","ERROR!");
        }

    }

}

void MainWindow::IsValidNumber(double number)
{
    if (number == 0.0 && ui->lineEdit->text().isEmpty())
    {
        QMessageBox::warning(this, "", "Enter the amount to convert!");

    }
}
