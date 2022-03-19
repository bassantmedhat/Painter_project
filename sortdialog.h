#ifndef SORTDIALOG_H
#define SORTDIALOG_H

#include <QDialog>
#include "shapes.h"
#include"paintarea.h"
namespace Ui {
class sortDialog;
}

class sortDialog : public QDialog
{
    Q_OBJECT

public:
    explicit sortDialog(QWidget *parent = nullptr);
    ~sortDialog();
    PaintArea *obj2 = new PaintArea;
    Shapes *s = new Shapes;
    std::vector<double> v;
private slots:

    QVector<Shapes*> sort();
    void TableWigdgetDisplay();

private:
    Ui::sortDialog *ui;
};

#endif // SORTDIALOG_H
