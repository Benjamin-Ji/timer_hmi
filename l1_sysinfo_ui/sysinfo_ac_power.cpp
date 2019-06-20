#include "sysinfo_ac_power.h"
#include "ui_sysinfo_ac_power.h"

sysinfo_ac_power::sysinfo_ac_power(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sysinfo_ac_power)
{
    ui->setupUi(this);
}

sysinfo_ac_power::~sysinfo_ac_power()
{
    delete ui;
}
