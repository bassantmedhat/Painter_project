#include "shapes.h"
#include <QPainter>
#include<QPointF>
#include<QGraphicsItem>
#include<qmap.h>

Shapes::Shapes(){
    //perimeter = getPerimeter();
}

Shapes::Shapes(QPoint p1, QPoint p2)
{
    myStart = p1;
    myEnd = p2;

}

Shapes::Shapes(double length, double width)
{
    rectLength = length;
    rectWidth = width;
}


QPoint Shapes::startPoint() const
{
  return myStart;
}

QPoint Shapes::EndPoint() const
{
    return myEnd;
}

//double Shapes::getLinePerimeter() const
//{

//}


//double Shapes::getRectPerimeter() const
//{
  //  return (rectLength + rectWidth) * 2;
//}

//double Shapes::getCirclePerimeter() const
//{

//}
double Shapes ::getPerimeter()const
{
    return 0;
}

QRectF Shapes::boundingRect() const
{
    return QRectF (EndPoint().x() > startPoint().x() ? startPoint().x() : EndPoint().x() -5 ,
            EndPoint().y() > startPoint().y() ? startPoint().y() : EndPoint().y() -5,
            qAbs(EndPoint().x() - startPoint().x()) +10,
            qAbs(EndPoint().y() - startPoint().y()) +10);

}

void Shapes::paint(QPainter *painter, const QStyleOptionGraphicsItem *OPTION, QWidget *widget)
{

}


//return (EndPoint().x() > startPoint().x() ? startPoint().x() : EndPoint().x() -5 ,
//        EndPoint().y() > startPoint().y() ? startPoint().y() : EndPoint().y() -5,
//        qAbs(EndPoint().x() - startPoint().x()) +10,
//        qAbs(EndPoint().y() - startPoint().y()) +10);
