#include "graficwidget.h"
#include <QPainter>
#include <QRectF>

GraficWidget::GraficWidget(QWidget* parent) {
    setWindowTitle("GRAFIC");
    setFixedSize(300,400);
}

GraficWidget::~GraficWidget()
{

}

void GraficWidget::setPoints(const QVector<QPointF> &points)
{
    this->_points=points;

}

void GraficWidget::paintEvent(QPaintEvent *event)
{

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    //Y
    painter.drawLine(40,20,40,height()-20);
    //X
    painter.drawLine(40,height()-20,width()-20,height()-20);

    painter.drawText(30, 10, "Y");
    painter.drawText(width() - 10, height()-20, "X");


    QRectF space(40, 20, width() - 60, height() - 40);//////////////
    double minX = _points.front().x(), maxX = _points.front().x();
    double minY = _points.front().y(), maxY = _points.front().y();

    for (const auto &point : _points) {
        if (point.x() < minX)
            minX = point.x();
        if (point.x() > maxX)
            maxX = point.x();
        if (point.y() < minY)
            minY = point.y();
        if (point.y() > maxY)
            maxY = point.y();
    }

    auto transformPoint = [&](const QPointF &point) {
        double x = 40 + (point.x() - minX) * (space.width() / (maxX - minX));
        double y = height() - 20 - (point.y() - minY) * (space.height() / (maxY - minY));
        return QPointF(x, y);
    };


    for (int i = 0; i < _points.size(); ++i) {
        QPointF transformedPoint = transformPoint(_points[i]);
        painter.drawEllipse(transformedPoint, 3, 3); // точка

        if (i > 0) {
            QPointF previousTransformedPoint = transformPoint(_points[i - 1]);
            painter.drawLine(previousTransformedPoint, transformedPoint); // линия
        }

        int tickSize = 3;
        // X
        painter.drawLine(transformedPoint.x(), height()-20 - tickSize,transformedPoint.x(), height()-20 + tickSize);
        painter.drawText(transformedPoint.x() - 10, height()-5, QString::number(_points[i].x()));

        // Y
        painter.drawLine(40 - tickSize, transformedPoint.y(), 40 + tickSize, transformedPoint.y());
        painter.drawText(5, transformedPoint.y() + 5, QString::number(_points[i].y()));

    }


}

