#ifndef SYSINFO_BATTERY_STATUS_H
#define SYSINFO_BATTERY_STATUS_H

#include <QWidget>

namespace Ui {
class sysinfo_battery_status;
}

class sysinfo_battery_status : public QWidget
{
    Q_OBJECT

public:
    explicit sysinfo_battery_status(QWidget *parent = 0);
    ~sysinfo_battery_status();

private:
    Ui::sysinfo_battery_status *ui;
};

#endif // SYSINFO_BATTERY_STATUS_H
