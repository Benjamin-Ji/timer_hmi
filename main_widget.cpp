#include "main_widget.h"
#include "ui_main_widget.h"
#include <qpalette.h>
#include <qcolor.h>
#include <QDateTime>
#include <QList>


main_widget::main_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::main_widget)
{
    ui->setupUi(this);

    /*set background color*/
    QColor col=QColor(120,120,120);

    QPalette pal=QPalette(col);

    setAutoFillBackground(true);

    setPalette(pal);



    /*init center stackedwidget*/
    stackedwidget_init();

    /*timer*/
    QTimer *timer = new QTimer(this);

    connect(timer,SIGNAL(timeout()),this,SLOT(timer_updata()));

    timer->start(1000);

    /*init pushbutton*/
    pb_init();


}

main_widget::~main_widget()
{
    delete ui;
}


void main_widget::set_current_widget()
{
    foreach (QAbstractButton *pb, pb_list) {
        if(pb->isChecked())
            ui->stackedWidget_center->setCurrentIndex(pb_list.indexOf(pb));
    }

}

void main_widget::pb_init()
{
    pb_group=new QButtonGroup(this);

    pb_group->addButton(ui->pb_sys_info);
    pb_group->addButton(ui->pb_ext_src);
    pb_group->addButton(ui->pb_inner_src);
    pb_group->addButton(ui->pb_net_state);
    pb_group->addButton(ui->pushButton_5);
    pb_group->addButton(ui->pushButton_6);
    pb_group->addButton(ui->pb_param_set);
    pb_group->addButton(ui->pb_help);


    pb_list=pb_group->buttons();

    foreach (QAbstractButton *pb, pb_list) {
        pb->setCheckable(true);
    }

    pb_group->setExclusive(true);

    ui->pb_sys_info->setChecked(true);
}


void main_widget::stackedwidget_init()
{
    ui->stackedWidget_center->removeWidget(ui->stackedWidget_centerPage1);

    /*create some widget*/
    center_widget_1=new center_widget(0,"参考源","初始化","交流电","直流电","蓄电池");
    center_widget_2=new center_widget(0,"卫星","B码","短波","环网");
    center_widget_3=new center_widget(0);
    center_widget_4=new center_widget(0);
    center_widget_5=new center_widget(0);
    center_widget_6=new center_widget(0);
    center_widget_7=new center_widget(0);
    center_widget_8=new center_widget(0);


    /*insert to stackedwidget*/
    ui->stackedWidget_center->insertWidget(0,center_widget_1);
    ui->stackedWidget_center->insertWidget(1,center_widget_2);
    ui->stackedWidget_center->insertWidget(2,center_widget_3);
    ui->stackedWidget_center->insertWidget(3,center_widget_4);
    ui->stackedWidget_center->insertWidget(4,center_widget_5);
    ui->stackedWidget_center->insertWidget(5,center_widget_6);
    ui->stackedWidget_center->insertWidget(6,center_widget_7);
    ui->stackedWidget_center->insertWidget(7,center_widget_8);


    /*center widget 1 add widget*/
    ref_src_widget=new sysinfo_ref_src();
    init_status_widget=new sysinfo_init_status();
    ac_power_widget=new sysinfo_ac_power();
    dc_power_widget=new sysinfo_dc_power();
    battery_status_widget=new sysinfo_battery_status();

    center_widget_1->insert_widget(0,ref_src_widget);
    center_widget_1->insert_widget(1,init_status_widget);
    center_widget_1->insert_widget(2,ac_power_widget);
    center_widget_1->insert_widget(3,dc_power_widget);
    center_widget_1->insert_widget(4,battery_status_widget);

    center_widget_1->set_current_index(0);


    /*center widget 2 add widget*/
    satellit_widget=new ext_src_satellit() ;
    bcode_widget=new ext_src_bcode();
    swave_widget=new ext_src_swave() ;
    lent_widget=new ext_src_lnet() ;

    center_widget_2->insert_widget(0,satellit_widget);
    center_widget_2->insert_widget(1,bcode_widget);
    center_widget_2->insert_widget(2,swave_widget);
    center_widget_2->insert_widget(3,lent_widget);

    center_widget_2->set_current_index(0);





}


//
//当鼠标按下时: 创建一条新线压入vector。并且将当前鼠标位置作为新线的起点。
void main_widget::mousePressEvent(QMouseEvent *event)
{

    QVector<QPoint>line;
    _lines.append(line);

    QVector<QPoint>&last_line = _lines.last();  //注意：引用而不是新建，否则不是同一个内存
    last_line.append(event->pos());

    update();   //注意一定要记得update
}

//如果鼠标正在移动：将这些移动的点都压入最上面也就是最新的线
#include <QDebug>
void main_widget::mouseMoveEvent(QMouseEvent *event)
{
    //  qDebug() << "mouseMoveEvent";
    if(!_lines.size()){  //保证安全
        QVector<QPoint>line;
        _lines.append(line);
    }
    QVector<QPoint>&last_line = _lines.last();

    last_line.append(event->pos());

    update();   //注意一定要记得update
}

//如果鼠标松开，这个点就是新线的终点，只需要把此时的点压入最新线就可以了
void main_widget::mouseReleaseEvent(QMouseEvent *event)
{
    QVector<QPoint>&last_line = _lines.last();
    last_line.append(event->pos());

    update();   //注意一定要记得update
}

//在鼠标事件中记录线的轨迹，在绘画事件中绘制轨迹
void main_widget::paintEvent(QPaintEvent *event)
{
    //Q_UNUSE(event);
    //创建画笔
    QPainter p(this);
    for(int i=0; i<_lines.size(); ++i)
    {
        const QVector<QPoint>& line = _lines.at(i);
        for(int j=0; j<line.size()-1; ++j)
        {
            p.drawLine(line.at(j), line.at(j+1));
        }
    }
}

void main_widget::timer_updata()
{
    ui->widget_indicator->flash_led_satellit_status();
}
