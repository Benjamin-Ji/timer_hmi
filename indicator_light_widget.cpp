#include "indicator_light_widget.h"
#include "ui_indicator_light_widget.h"



indicator_light_widget::indicator_light_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::indicator_light_widget)
{
    ui->setupUi(this);
    
    setAutoFillBackground(true);
    
    background_pix.load(":/new/prefix1/pixmap/indicator_backgroubd.png");
    
    
    led_red=new QPixmap(":/new/prefix1/pixmap/light_red.png");
    led_green=new QPixmap(":/new/prefix1/pixmap/light_green.png");
    
    //    led_red->scaled(ui->led_dev_sync->size(), Qt::KeepAspectRatio);
    //    led_green->scaled(ui->led_dev_sync->size(), Qt::KeepAspectRatio);
    
    ui->led_dev_sync->setScaledContents(true);
    ui->led_satellit_status->setScaledContents(true);
    ui->led_bcode_status->setScaledContents(true);
    ui->led_swave_status->setScaledContents(true);
    ui->led_lnet_status->setScaledContents(true);
    ui->led_ru_status->setScaledContents(true);
    ui->led_oc_status->setScaledContents(true);
    ui->led_dev_keeping->setScaledContents(true);
    ui->led_dev_alarm->setScaledContents(true);
    
    
    
    ui->led_dev_sync->setPixmap(*led_red);
    ui->led_satellit_status->setPixmap(*led_red);
    ui->led_bcode_status->setPixmap(*led_red);
    ui->led_swave_status->setPixmap(*led_red);
    ui->led_lnet_status->setPixmap(*led_red);
    ui->led_ru_status->setPixmap(*led_red);
    ui->led_oc_status->setPixmap(*led_red);
    ui->led_dev_keeping->setPixmap(*led_red);
    ui->led_dev_alarm->setPixmap(*led_red);
    
    
    QTimer *timer = new QTimer(this);
    
    connect(timer,SIGNAL(timeout()),this,SLOT(timer_updata()));
    
    timer->start(1000);
    
    
}

indicator_light_widget::~indicator_light_widget()
{
    delete ui;
}


void indicator_light_widget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPalette palette;
    palette.setBrush(this->backgroundRole(), QBrush(background_pix.scaled(this->size())));
    this->setPalette(palette);
    
    
}

void indicator_light_widget::timer_updata()
{
    QDateTime time = QDateTime::currentDateTime();
    current_seconds= time.toTime_t();
    
    
}




/*device sync indicator*/
void indicator_light_widget:: set_led_dev_sync()
{
    
}
void indicator_light_widget:: reset_led_dev_sync()
{
    
}

/*satellit status indicator*/
void indicator_light_widget:: set_led_satellit_status()
{
    ui->led_satellit_status->setPixmap(*led_green);
}
void indicator_light_widget:: reset_led_satellit_status()
{
    ui->led_satellit_status->setPixmap(*led_red);
}

void indicator_light_widget:: flash_led_satellit_status()
{
    
    if(current_seconds&0x01)
    {
        ui->led_satellit_status->setPixmap(*led_red);
    }else
    {
        ui->led_satellit_status->setPixmap(*led_green);
    }
    
}

/*bcode status indicator*/
void indicator_light_widget:: set_led_bcode_status()
{
    
}
void indicator_light_widget:: reset_led_bcode_status()
{
    
}

/*short wave status indicator*/
void indicator_light_widget:: set_led_swave_status()
{
    
}
void indicator_light_widget:: reset_led_swave_status()
{
    
}

/*loop net indicator*/
void indicator_light_widget:: set_led_lnet_status()
{
    
}
void indicator_light_widget:: reset_led_lnet_status()
{
    
}
