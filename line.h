#ifndef LINE_H
#define LINE_H

#include "shapes.h"

class line : public Shapes
{
    Q_OBJECT
public:
    line();
    line (QPoint p1,QPoint p2);
    double getLinePerimeter() const;
    double getPerimeter() const;
    double length;
private:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *OPTION ,QWidget *widget);

};

#endif // LINE_H
