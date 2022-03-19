#include "line.h"

line::line()
{

}

line::line(QPoint p1, QPoint p2) : Shapes(p1, p2)
{
    length = sqrt((p2.x() - p1.x())^2 + (p2.y() - p1.y())^2);
    this->name =QString("Line %1" ) .arg(lcount);
    lcount++;
}

double line::getLinePerimeter() const
{
    return length;
}

double line::getPerimeter() const
{
    return getLinePerimeter();
}

void line::paint(QPainter *painter, const QStyleOptionGraphicsItem *OPTION, QWidget *widget)
{

}
