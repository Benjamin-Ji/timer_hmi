#include "sysinfo_ref_src.h"
#include "ui_sysinfo_ref_src.h"

sysinfo_ref_src::sysinfo_ref_src(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sysinfo_ref_src)
{
    ui->setupUi(this);
}

sysinfo_ref_src::~sysinfo_ref_src()
{
    delete ui;
}
