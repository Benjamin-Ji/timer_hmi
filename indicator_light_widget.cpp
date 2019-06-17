#include "indicator_light_widget.h"
#include "ui_indicator_light_widget.h"

indicator_light_widget::indicator_light_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::indicator_light_widget)
{
    ui->setupUi(this);
}

indicator_light_widget::~indicator_light_widget()
{
    delete ui;
}
