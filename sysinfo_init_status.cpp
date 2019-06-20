#include "sysinfo_init_status.h"
#include "ui_sysinfo_init_status.h"

sysinfo_init_status::sysinfo_init_status(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sysinfo_init_status)
{
    ui->setupUi(this);
}

sysinfo_init_status::~sysinfo_init_status()
{
    delete ui;
}
