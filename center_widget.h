#ifndef CENTER_WIDGET_H
#define CENTER_WIDGET_H

#include <QWidget>
#include <QVector>
#include <QPushButton>
#include <QButtonGroup>
#include <QList>
#include <QAbstractButton>


namespace Ui {
class center_widget;
}

class center_widget : public QWidget
{
    Q_OBJECT

public:
    center_widget(QWidget *parent = 0,
                  QString pb1_name="",
                  QString pb2_name="",
                  QString pb3_name="",
                  QString pb4_name="",
                  QString pb5_name="",
                  QString pb6_name="",
                  QString pb7_name="",
                  QString pb8_name="");

    ~center_widget();

    void insert_widget(int index,QWidget *widget);
    void set_current_index(int index);


private:
    Ui::center_widget *ui;

    QButtonGroup *pb_group;

    QList<QAbstractButton*> pb_list;

    void pb_init();

public slots:


    void set_current_widget();


};

#endif // CENTER_WIDGET_H
