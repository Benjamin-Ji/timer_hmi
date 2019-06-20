#ifndef SYSINFO_INIT_STATUS_H
#define SYSINFO_INIT_STATUS_H

#include <QWidget>

namespace Ui {
class sysinfo_init_status;
}

class sysinfo_init_status : public QWidget
{
    Q_OBJECT

public:
    explicit sysinfo_init_status(QWidget *parent = 0);
    ~sysinfo_init_status();

private:
    Ui::sysinfo_init_status *ui;
};

#endif // SYSINFO_INIT_STATUS_H
