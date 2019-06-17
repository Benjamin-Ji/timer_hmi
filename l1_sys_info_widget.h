#ifndef L1_SYS_INFO_WIDGET_H
#define L1_SYS_INFO_WIDGET_H

#include <QWidget>

namespace Ui {
class l1_sys_info_widget;
}

class l1_sys_info_widget : public QWidget
{
    Q_OBJECT

public:
    explicit l1_sys_info_widget(QWidget *parent = 0);
    ~l1_sys_info_widget();

private:
    Ui::l1_sys_info_widget *ui;
};

#endif // L1_SYS_INFO_WIDGET_H
