#include "sysinfo_battery_status.h"
#include "ui_sysinfo_battery_status.h"

sysinfo_battery_status::sysinfo_battery_status(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sysinfo_battery_status)
{
    ui->setupUi(this);
}

sysinfo_battery_status::~sysinfo_battery_status()
{
    delete ui;
}
