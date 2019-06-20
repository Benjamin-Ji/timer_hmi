#include "ext_src_lnet.h"
#include "ui_ext_src_lnet.h"

ext_src_lnet::ext_src_lnet(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ext_src_lnet)
{
    ui->setupUi(this);
}

ext_src_lnet::~ext_src_lnet()
{
    delete ui;
}
