#include "sysinfo_ref_src.h"
#include "ui_sysinfo_ref_src.h"

sysinfo_ref_src::sysinfo_ref_src(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sysinfo_ref_src)
{
    ui->setupUi(this);

    ui->tableWidget_log->horizontalHeader()->setSectionResizeMode(0,QHeaderView::ResizeToContents);
    ui->tableWidget_log->horizontalHeader()->setSectionResizeMode(1,QHeaderView::Stretch);

    ui->tableWidget_src->horizontalHeader()->setSectionResizeMode(0,QHeaderView::ResizeToContents);
    ui->tableWidget_src->horizontalHeader()->setSectionResizeMode(1,QHeaderView::Stretch);

}

sysinfo_ref_src::~sysinfo_ref_src()
{
    delete ui;
}
