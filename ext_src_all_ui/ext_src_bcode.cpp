#include "ext_src_bcode.h"
#include "ui_ext_src_bcode.h"

ext_src_bcode::ext_src_bcode(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ext_src_bcode)
{
    ui->setupUi(this);
}

ext_src_bcode::~ext_src_bcode()
{
    delete ui;
}
