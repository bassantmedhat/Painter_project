#include "sortdialog.h"
#include "ui_sortdialog.h"
#include "paintarea.h"
#include "shapes.h"
#include <QTableWidget>
#include <QTableWidgetItem>
#include"QString"

sortDialog::sortDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sortDialog)
{
    ui->setupUi(this);
   TableWigdgetDisplay();
}

sortDialog::~sortDialog()
{
    delete ui;
}

QVector<Shapes*> sortDialog::sort(){
//    for(int i = 0; i < obj2->sortVector->size(); i++){
//        for(int j = 0; j < obj2->sortVector->size(); j++){
//            if(obj2->sortVector->at(j)->getPerimeter() > obj2->sortVector->at(j + 1)->getPerimeter()){
//                s = obj2->sortVector->at(j);
//                obj2->sortVector->at(j) = obj2->sortVector->at(j + 1);
//                obj2->sortVector->at(j + 1)= s;
//            }
//        }

//    }
    return obj2->sortVector;
}

void sortDialog::TableWigdgetDisplay()
{
  /*1*/  QVector<Shapes*> vect = obj2->sortVector;
    ui->table->setRowCount(vect.size());
    ui->table->setColumnCount(2);

    QStringList labels;
    labels << "Name" << "Perimeter";
    ui->table->setHorizontalHeaderLabels(labels);

    for(int j = 0; j < ui->table->rowCount(); j++){
        QTableWidgetItem *item;
        for(int k = 0; k < ui->table->columnCount(); k++){
            item = new QTableWidgetItem;

            if(k == 0)
                item->setText("Shape " + QString::number(j));
            if(k == 1)
            item->setText(QString::number(vect.at(j)->getPerimeter(), 'f', 2));

             ui->table->setItem(j, k, item);

          }
     }
}

