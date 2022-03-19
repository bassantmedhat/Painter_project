#ifndef CIRCLE_H
#define CIRCLE_H

#include "shapes.h"

class circle : public Shapes
{
    Q_OBJECT
public:
    circle();
    circle (QPoint p1,QPoint p2);
    double getCirclePerimeter() const;
    double getPerimeter() const;
    double radius;
    double perimeter;
    const double pi = 3.14;
private:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *OPTION ,QWidget *widget);
};

#endif // CIRCLE_H
