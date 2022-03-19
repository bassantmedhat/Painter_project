#include "rectangle.h"
#include<QPainter>
#include<QPoint>
#include "shapes.h"

Rectangle::Rectangle(QPoint x1,QPoint x2):Shapes(x1, x2){
    this->name = QString("Rectangle %1" ) .arg(rcount);
  length =x2.y()-x1.y();
   width = x2.x()-x1.x();
    start = x1;
    end = x2;
    rcount++;
}

Rectangle::Rectangle(double l, double w):Shapes(l, w)
{
    length = l;
    width = w;
}
Rectangle::Rectangle(){

}

double Rectangle:: getRectPerimeter() const{
    return (length + width) * 2;
}
double Rectangle:: getPerimeter() const{
    return getRectPerimeter();
}
void Rectangle::paint(QPainter *painter, const QStyleOptionGraphicsItem *OPTION, QWidget *widget)
{

}
