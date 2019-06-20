#include "sysinfo_dc_power.h"
#include "ui_sysinfo_dc_power.h"

sysinfo_dc_power::sysinfo_dc_power(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sysinfo_dc_power)
{
    ui->setupUi(this);
}

sysinfo_dc_power::~sysinfo_dc_power()
{
    delete ui;
}
