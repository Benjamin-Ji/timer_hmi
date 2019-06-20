#include "ext_src_swave.h"
#include "ui_ext_src_swave.h"

ext_src_swave::ext_src_swave(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ext_src_swave)
{
    ui->setupUi(this);
}

ext_src_swave::~ext_src_swave()
{
    delete ui;
}
