#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QApplication>
#include "createtablewindow.h"
#include "calculateinaccuracywindow.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    //Constructor
    MainWindow(QWidget *parent = nullptr);
    //Destructor
    ~MainWindow();
signals:
    //Signal for calc button clicked
    void openCreateTableWindow();

 private slots:
    //Close applicaton
    void onExitButtonClicked();
    //Make emit openCreateTableWindow
    void onErrorButtonClicked();

private:
    Ui::MainWindow *ui;



};
#endif // MAINWINDOW_H
