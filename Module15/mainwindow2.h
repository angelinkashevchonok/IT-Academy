#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#define KOEF_BYN_IN_RUB 0,21
#define KOEF_BYN_IN_USD 0,304395
#define KOEF_BYN_IN_EUR 0,27697
#define KOEF_USD_IN_RUB 96,11
#define KOEF_USD_IN_BYN 3,29
#define KOEF_USD_IN_EUR 0,91102
#define KOEF_EUR_IN_BYN 3,61
#define KOEF_EUR_IN_USD 1,1
#define KOEF_EUR_IN_RUB 105,69
#define KOEF_RUB_IN_BYN 0,034472
#define KOEF_RUB_IN_USD 0,010405
#define KOEF_RUB_IN_EUR 0,01

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void handleConvertButtonClicked();


private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
