#include "center_widget.h"
#include "ui_center_widget.h"

center_widget::center_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::center_widget)
{
    ui->setupUi(this);
}

center_widget::~center_widget()
{
    delete ui;
}
