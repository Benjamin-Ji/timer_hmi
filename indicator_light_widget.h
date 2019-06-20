#ifndef INDICATOR_LIGHT_WIDGET_H
#define INDICATOR_LIGHT_WIDGET_H

#include <QWidget>
#include <QBitmap>
#include <QPainter>
#include <QTimer>
#include <QDateTime>




namespace Ui {
class indicator_light_widget;
}

class indicator_light_widget : public QWidget
{
    Q_OBJECT

public:
    explicit indicator_light_widget(QWidget *parent = 0);
    ~indicator_light_widget();

private:
    Ui::indicator_light_widget *ui;



    void paintEvent(QPaintEvent *e);

    QPixmap background_pix;
    QPixmap* led_red;
    QPixmap* led_green;

    int current_seconds;

public slots:

    void timer_updata();

    /*device sync indicator*/
    void set_led_dev_sync();
    void reset_led_dev_sync();

    /*satellit status indicator*/
    void set_led_satellit_status();
    void reset_led_satellit_status();
    void flash_led_satellit_status();

    /*bcode status indicator*/
    void set_led_bcode_status();
    void reset_led_bcode_status();

    /*short wave status indicator*/
    void set_led_swave_status();
    void reset_led_swave_status();

    /*loop net indicator*/
    void set_led_lnet_status();
    void reset_led_lnet_status();

};

#endif // INDICATOR_LIGHT_WIDGET_H
