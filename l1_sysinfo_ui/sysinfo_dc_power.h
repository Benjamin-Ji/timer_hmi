#ifndef SYSINFO_DC_POWER_H
#define SYSINFO_DC_POWER_H

#include <QWidget>

namespace Ui {
class sysinfo_dc_power;
}

class sysinfo_dc_power : public QWidget
{
    Q_OBJECT

public:
    explicit sysinfo_dc_power(QWidget *parent = 0);
    ~sysinfo_dc_power();

private:
    Ui::sysinfo_dc_power *ui;
};

#endif // SYSINFO_DC_POWER_H
