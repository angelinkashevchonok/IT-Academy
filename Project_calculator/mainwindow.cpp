#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "createtablewindow.h"
#include "calculateinaccuracywindow.h"
#include <QApplication>
#include <QPushButton>
#include <QDebug>
#include <QLayout>
#include <QSpacerItem>
#include<QSizePolicy>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: darkolivegreen");
    ui->label->setAlignment(Qt::AlignCenter);


    connect(ui->errorButton,&QPushButton::clicked,this,&MainWindow::onErrorButtonClicked);
    connect(ui->exitButton,&QPushButton::clicked,this,&MainWindow::onExitButtonClicked);

}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onExitButtonClicked() {
    QApplication::quit();
}

void MainWindow::onErrorButtonClicked() {
    emit openCreateTableWindow();
}


