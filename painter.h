#ifndef PAINTER_H
#define PAINTER_H

#include <QtWidgets/QMainWindow>
#include <QtGui>
#include "resizedialog.h"
#include <QList>
#include"shapes.h"
#include"paintarea.h"
namespace Ui {
class Painter;
}

class Painter : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Painter(QWidget *parent = 0);
    ~Painter();
    PaintArea *obj = new PaintArea;
   // Painter(QVector<Shapes*> *vect);
    QString Name;
  //    QVector<Shapes*> *vect3;
private slots:
    void on_setwidth_clicked();

    void on_tool_pencil_clicked();

    void on_tool_eraser_clicked();

    void Open_File();

    void Save_File();

    void Save_As();

    void on_tool_line_clicked();

    void on_tool_rectangle_clicked();

    void New_File();

    void on_tool_eclipse_clicked();

    void on_tool_RoundRect_clicked();

    void on_tool_Cursor_clicked();

    void on_Sort_clicked();

    void on_tool_Bucket_clicked();

    void Undo();

    void Redo();

    void on_tool_Select_clicked();

    void Cut();

    void Copy();

    void Paste();

    void on_tool_spray_clicked();

    void on_setSpray_clicked();

    void Resize();

    void PenColor(QColor);

    void FillColor(QColor);

    void setSize(int, int);

    void noRedo();

    void noUndo();

    void enableRedo();

    void enableUndo();

    void canPaste();

    void canCopy();

    void noCopy();

    void showReisize();

    void showSort();


protected:
    bool eventFilter(QObject *object, QEvent *event);

private:
    Ui::Painter *ui;
    bool _saved;
    bool _opened;
    QString _filename;
    QColor Color;
    QColor BGColor;

};

#endif // PAINTER_H
