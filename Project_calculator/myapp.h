#ifndef MYAPP_H
#define MYAPP_H
#include "createtablewindow.h"
#include "calculateinaccuracywindow.h"


#include <QObject>
#include <QDebug>

class MyApp:public QObject
{
    Q_OBJECT

public:
    //Constructor
    MyApp();
    //Destrutor
    ~MyApp();
private slots:
    //Show create table
    void showCreateTableWindow();
    //Show table(rows,cols)
    void onTableSizeSelected(int rows, int cols);
private:
    MainWindow *mainWindow;
    CreateTableWindow *createTableWindow;
    CalculateInaccuracyWindow *tableWindow;

};

#endif // MYAPP_H
