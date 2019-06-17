#include "l1_sys_info_widget.h"
#include "ui_l1_sys_info_widget.h"

l1_sys_info_widget::l1_sys_info_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::l1_sys_info_widget)
{
    ui->setupUi(this);
}

l1_sys_info_widget::~l1_sys_info_widget()
{
    delete ui;
}
