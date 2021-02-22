#include "slider.h"

Slider::Slider() { }

QRectF Slider::boundingRect() const
{
    return QRectF(-250, -250, 500, 500);
}

void Slider::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(option);
    Q_UNUSED(widget);

    painter->setBrush(Qt::NoBrush);
    painter->setPen(QPen(Qt::black, 5, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    painter->drawRect(-70, -50, 140, 100);
    painter->drawEllipse(-25, -25, 50, 50);
    painter->setPen(QPen(Qt::blue, 5, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    painter->drawLine(0, 0, 0, 200);
    painter->setPen(QPen(Qt::yellow, 5, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    painter->drawLine(0, 0, 200, 0);
}

