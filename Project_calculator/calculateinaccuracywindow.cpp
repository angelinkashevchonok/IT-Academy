#include "calculateinaccuracywindow.h"
#include "ui_calculateinaccuracywindow.h"
#include<QTableWidgetItem>
#include <QVector>
#include <QMessageBox>
#include <QString>
#include <numeric>
#include <cmath>
#include <QDebug>
#include <QString>

CalculateInaccuracyWindow::CalculateInaccuracyWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CalculateInaccuracyWindow)
{
    ui->setupUi(this);

     setWindowTitle("Calculator");
    this->setStyleSheet("background-color: darkolivegreen");

     grafic=new GraficWidget();
     grafic->setFixedSize(400, 300);

    connect(ui->calcButton,&QPushButton::clicked,this,ReadDataFromTable);
     connect(ui->cleanButton,&QPushButton::clicked,this,CleanButtonClicked);

}

CalculateInaccuracyWindow::~CalculateInaccuracyWindow()
{
    delete ui;
}

void CalculateInaccuracyWindow::setTableSize(int rows, int cols)
{
    ui->tableWidget->setRowCount(rows);
    ui->tableWidget->setColumnCount(cols);
    ui->tableWidget->setHorizontalHeaderLabels({"X values", "Y values"});

}

void CalculateInaccuracyWindow::ReadDataFromTable()
{
    int col=0;

    QVector<double> firstColumn;
        for (int row=0; row< ui->tableWidget->rowCount();row++){
             QTableWidgetItem *item = ui->tableWidget->item(row, col);
            if (item!=nullptr) {
                 bool ok=false;
                QString str=item->text();
                double data = str.toDouble(&ok);
                 if (ok) {
                     firstColumn.push_back(data);
                 } else {
                     QMessageBox::warning(this, "Warning", "Invalid data in table cell!");
                     return;
                 }
            }
            else{
                QMessageBox::warning(this,"Waring","There isn't data!Please enter data!");
                return;
            }
        }

     col = 1;
     QVector<double> secondColumn;

     for (int row=0; row<ui->tableWidget->rowCount();row++){
         QTableWidgetItem *item = ui->tableWidget->item(row, col);
         if (item!=nullptr) {
              bool ok=false;
             QString str=item->text();
             double data = str.toDouble(&ok);
              if(ok){
             secondColumn.push_back(data);
              }
              else{
                  QMessageBox::warning(this, "Warning", "Invalid data in table!");
                  return;
              }
         }
         else{
             QMessageBox::warning(this,"Waring","There isn't data!Please enter data!");
             return;
         }
     }

         double averagex=(std::accumulate(firstColumn.begin(),firstColumn.end(),0.0d))/firstColumn.size();

         double averagey=(std::accumulate(secondColumn.begin(),secondColumn.end(),0.0d))/secondColumn.size();

         double aversquarex=(std::accumulate(firstColumn.begin(),firstColumn.end(),0.0d,[](double summ,double elem){
             return summ+elem*elem;
         }))/firstColumn.size();

         double aversquarey=(std::accumulate(secondColumn.begin(),secondColumn.end(),0.0d,[](double summ,double elem){
             return summ+elem*elem;
                             }))/secondColumn.size();

        double multiplxy=0.0d;
         for(int i=0;i<firstColumn.size();i++){
             multiplxy+= firstColumn[i]*secondColumn[i];
         }
         double averagemultxy=multiplxy/firstColumn.size();

         double k=(averagemultxy-averagex*averagey)/(aversquarex-averagex*averagex);

         double b= averagey-k*averagex;

         double del_k=_koef_Student*std::sqrt((1.0/(firstColumn.size()-2))*((aversquarey-averagey*averagey)/(aversquarex-averagex*averagex)-k*k));

         double del_b=del_k*std::sqrt(aversquarex);

         double eps=del_k/k*100.0;

         QString resultstring="Y = "+QString::number(k,'d',6)+"X"+"+"+QString::number(b,'d',6)+"\n"+"\n";
         resultstring.append("<X> = "+ QString::number(averagex,'d',6)+"\n"+"\n");
         resultstring.append("<Y> = "+QString::number(averagey,'d',6)+"\n"+"\n");
         resultstring.append("<X^2> = "+QString::number(aversquarex,'d',6)+"\n"+"\n");
         resultstring.append("<Y^2> = "+QString::number(aversquarey,'d',6)+"\n"+"\n");
         resultstring.append("<XY> = "+QString::number(averagemultxy,'d',6)+"\n"+"\n");
         resultstring.append("K = "+QString::number(k,'d',6)+"\n"+"\n");
         resultstring.append("B = "+QString::number(b,'d',6)+"\n"+"\n");
         resultstring.append("delta K = "+QString::number(del_k,'d',8)+"\n"+"\n");
         resultstring.append("delta B = "+QString::number(del_b,'d',8)+"\n"+"\n");
         resultstring.append("epsilon K = "+QString::number(eps,'d',2)+"%"+"\n"+"\n");

         QVector<QPointF> points;
         for(int i=0;i<firstColumn.size();i++){
             points.push_back(QPointF(firstColumn[i],secondColumn[i]));

         }
         grafic->setPoints(points);
         grafic->show();

          ui->textEdit->setPlainText(resultstring);

     }

void CalculateInaccuracyWindow::CleanButtonClicked()
{
    ui->tableWidget->clearContents();
    ui->textEdit->clear();
    grafic->hide();

}








