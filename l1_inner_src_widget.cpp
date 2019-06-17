#include "l1_inner_src_widget.h"
#include "ui_l1_inner_src_widget.h"

l1_inner_src_widget::l1_inner_src_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::l1_inner_src_widget)
{
    ui->setupUi(this);
}

l1_inner_src_widget::~l1_inner_src_widget()
{
    delete ui;
}
