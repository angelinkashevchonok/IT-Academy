#ifndef CALCULATEINACCURACYWINDOW_H
#define CALCULATEINACCURACYWINDOW_H
#include "mainwindow.h"
#include "graficwidget.h"
#include <QWidget>
#include <QTableWidget>

namespace Ui {
class CalculateInaccuracyWindow;
}

class CalculateInaccuracyWindow : public QMainWindow
{
    Q_OBJECT

public:
    //Constructor
     CalculateInaccuracyWindow(QWidget *parent = nullptr);
    //Destructor
    ~CalculateInaccuracyWindow();

public slots:
    //Set table size and header labels
    //@param rows as int
    //@param cols as int
     void setTableSize(int rows, int cols);

 private slots:
     //Read data from table and show results
    void ReadDataFromTable();

     // Clean table and edit, hide grafic
     void CleanButtonClicked();


private:
    Ui::CalculateInaccuracyWindow *ui;
    GraficWidget* grafic;
    //koef for formules
     const float _koef_Student= 2.26f;

};

#endif // CALCULATEINACCURACYWINDOW_H
