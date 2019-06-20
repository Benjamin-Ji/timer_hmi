#ifndef SYSINFO_AC_POWER_H
#define SYSINFO_AC_POWER_H

#include <QWidget>

namespace Ui {
class sysinfo_ac_power;
}

class sysinfo_ac_power : public QWidget
{
    Q_OBJECT

public:
    explicit sysinfo_ac_power(QWidget *parent = 0);
    ~sysinfo_ac_power();

private:
    Ui::sysinfo_ac_power *ui;
};

#endif // SYSINFO_AC_POWER_H
