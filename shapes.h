#ifndef SHAPES_H
#define SHAPES_H
#include<QObject>
#include<QString>
#include<QGraphicsItem>
#include<QDebug>
#include<QPoint>
static int lcount = 1;
static int rcount = 1;
static int ccount = 1;
class Shapes :public QObject,public QGraphicsItem{//unkown 1
    Q_OBJECT ;//

protected:
 QPoint startPoint()const;
 QPoint EndPoint()const;

 QPoint myStart;
 QPoint myEnd;
public:
 Shapes();
 Shapes(QPoint p1 ,QPoint p2);
 Shapes(double length, double width);
 //double getLinePerimeter() const;
 //double getRectPerimeter() const;
 //double getCirclePerimeter() const;
 double getPerimeter ()const;
 std::vector<double> sortVector;
 double perimeter;
 QString name;
 double rectLength;
 double rectWidth;
 double lineLength;
 double circleRadius;
private:
 QRectF boundingRect()const;
 void paint(QPainter *painter, const QStyleOptionGraphicsItem *OPTION ,QWidget *widget);
};
#endif // SHAPES_H
