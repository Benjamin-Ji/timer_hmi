#include "ext_src_satellit.h"
#include "ui_ext_src_satellit.h"

ext_src_satellit::ext_src_satellit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ext_src_satellit)
{
    ui->setupUi(this);
}

ext_src_satellit::~ext_src_satellit()
{
    delete ui;
}
