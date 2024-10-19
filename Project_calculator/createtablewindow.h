#ifndef CREATETABLEWINDOW_H
#define CREATETABLEWINDOW_H
#include"mainwindow.h"
#include <QWidget>
#include<QSpinBox>

namespace Ui {
class CreateTableWindow;
}

class CreateTableWindow : public QMainWindow
{
    Q_OBJECT

public:
    //Constructor
     CreateTableWindow(QWidget *parent = nullptr);
    //Destructor
    ~CreateTableWindow();


signals:
    // Signal size of table selected
    //@param rows as int
    //@param cols as int
    void tableSizeSelected(int rows, int cols);


private slots:
    //Get number of rows and cols from spinboxes
    void onCreateButtonClicked();
 private:
    Ui::CreateTableWindow *ui;

     QSpinBox* rowspinBox;
     QSpinBox* colspinBox;
};

#endif // CREATETABLEWINDOW_H
