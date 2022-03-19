#include "circle.h"

circle::circle()
{

}

circle::circle(QPoint p1,QPoint p2) : Shapes(p1, p2)
{
    radius = (p2.x() - p1.x()) / 2;
    this->name = QString("Circle %1" ) .arg(ccount);
    ccount++;
}
double circle ::getPerimeter()const
{
    return getCirclePerimeter();
}
double circle::getCirclePerimeter() const
{
    return (2 * pi * radius);
}

void circle::paint(QPainter *painter, const QStyleOptionGraphicsItem *OPTION, QWidget *widget)
{

}
