#include "title_panel_widget.h"
#include "ui_title_panel_widget.h"
#include <QTimer>
#include <QDateTime>



title_panel_widget::title_panel_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::title_panel_widget)
{
    ui->setupUi(this);

    //show time in head

    QTimer *timer = new QTimer(this);

    connect(timer,SIGNAL(timeout()),this,SLOT(timer_updata()));

    timer->start(1000);

    //设置字号
    QFont ft;
    ft.setPointSize(20);
    ui->label->setFont(ft);

    //设置颜色
    //    QPalette pa;
    //    pa.setColor(QPalette::WindowText,Qt::red);
    //    ui->label->setPalette(pa);

    ui->label->setStyleSheet("border-width: 1px;border-style: solid;border-color: rgb(152,120,120);background-color: rgb(152,120,120);");

}

title_panel_widget::~title_panel_widget()
{
    delete ui;
}


void title_panel_widget::timer_updata()
{
    QDateTime time = QDateTime::currentDateTime();

    //    QString str = time.toString("北京时间 yyyy-MM-dd hh:mm:ss dddd");
    QString str = time.toString("北京时间 yyyy-MM-dd hh:mm:ss");

    ui->label->setText(str);

}
