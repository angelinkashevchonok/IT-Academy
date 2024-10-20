#include "createtablewindow.h"
#include "ui_createtablewindow.h"
#include <QSpinBox>

CreateTableWindow::CreateTableWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CreateTableWindow)
{

    ui->setupUi(this);
    setWindowTitle("Create table");
    ui->label_3->setAlignment(Qt::AlignCenter);
    connect(ui->createButton,&QPushButton::clicked,this,&CreateTableWindow::onCreateButtonClicked);

}

CreateTableWindow::~CreateTableWindow()
{
    delete ui;
}

void CreateTableWindow::onCreateButtonClicked()
{
    int fixedCol=2;
    ui->colspinBox->setMaximum(fixedCol);
    ui->colspinBox->setMinimum(fixedCol);
    int rows = ui->rowspinBox->value();
    int cols = ui->colspinBox->value();
    emit tableSizeSelected(rows, cols);
}






