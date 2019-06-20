#ifndef MAIN_WIDGET_H
#define MAIN_WIDGET_H

#include <QWidget>
#include <QTimer>
#include <QPushButton>
#include <QButtonGroup>
#include <QTimer>
#include <QDateTime>
#include <QMouseEvent>
#include <QPainter>
#include <QVector>

#include "center_widget.h"
#include "sysinfo_ref_src.h"
#include "sysinfo_init_status.h"
#include "sysinfo_ac_power.h"
#include "sysinfo_dc_power.h"
#include "sysinfo_battery_status.h"

#include "ext_src_all_ui/ext_src_satellit.h"
#include "ext_src_all_ui/ext_src_bcode.h"
#include "ext_src_all_ui/ext_src_swave.h"
#include "ext_src_all_ui/ext_src_lnet.h"



namespace Ui {
class main_widget;
}

class main_widget : public QWidget
{
    Q_OBJECT

public:
    explicit main_widget(QWidget *parent = 0);
    ~main_widget();

private:
    Ui::main_widget *ui;

    QButtonGroup *pb_group;

    QList<QAbstractButton*> pb_list;


    void pb_init();
    void stackedwidget_init();

    /**/
    center_widget *center_widget_1;
    center_widget *center_widget_2;
    center_widget *center_widget_3;
    center_widget *center_widget_4;
    center_widget *center_widget_5;
    center_widget *center_widget_6;
    center_widget *center_widget_7;
    center_widget *center_widget_8;

    /*uesd to center widget 1*/
    sysinfo_ref_src *ref_src_widget;
    sysinfo_init_status* init_status_widget;
    sysinfo_ac_power* ac_power_widget;
    sysinfo_dc_power* dc_power_widget;
    sysinfo_battery_status* battery_status_widget;


    /*uesd to center widget 2*/
    ext_src_satellit* satellit_widget;
    ext_src_bcode* bcode_widget;
    ext_src_swave* swave_widget;
    ext_src_lnet* lent_widget;



    /*rewrite event*/
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *event);

    QVector<QVector<QPoint>>_lines;



public slots:
    void timer_updata();

    void set_current_widget();

};

#endif // MAIN_WIDGET_H
