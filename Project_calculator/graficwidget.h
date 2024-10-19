#ifndef GRAFICWIDGET_H
#define GRAFICWIDGET_H

#include <QWidget>
#include <QVector>
#include <QPointF>


class GraficWidget:public QWidget
{
    Q_OBJECT
public:
    //Constructor
     GraficWidget(QWidget*parent=nullptr);
    //Destructor
    ~GraficWidget();
     //Set points for grafic
    void setPoints(const QVector<QPointF> &points);
protected:
    //for paint
    void paintEvent(QPaintEvent* event);
private:
    //vector for points
    QVector<QPointF> _points;
};

#endif // GRAFICWIDGET_H
