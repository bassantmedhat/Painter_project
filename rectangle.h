#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <Shapes.h>
#include<QObject>
#include<QGraphicsItem>
#include<QPoint>
class Rectangle : public Shapes
{
    Q_OBJECT

public:
    Rectangle();
    Rectangle(QPoint x1,QPoint x2);
    Rectangle(double l, double w);
    double getRectPerimeter() const;
    double getPerimeter()const;
    double length;
    double width;
    QPoint start;
    QPoint end;

private:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *OPTION ,QWidget *widget);
};

#endif // RECTANGLE_H
