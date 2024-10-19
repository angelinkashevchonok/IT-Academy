#include "myapp.h"

MyApp::MyApp() {

     mainWindow = new MainWindow();
     createTableWindow = new CreateTableWindow();
     tableWindow = new CalculateInaccuracyWindow();


    connect(mainWindow, &MainWindow::openCreateTableWindow, this, &MyApp::showCreateTableWindow);
    connect(createTableWindow, &CreateTableWindow::tableSizeSelected, this, &MyApp::onTableSizeSelected);

    mainWindow->show();
}

MyApp::~MyApp()
{

}

void  MyApp::showCreateTableWindow() {
    createTableWindow->show();
}

void MyApp::onTableSizeSelected(int rows, int cols) {
    tableWindow->setTableSize(rows, cols);
    mainWindow->hide();
    createTableWindow->hide();
    tableWindow->show();
}
