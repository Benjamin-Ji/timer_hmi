#include "title_panel_widget.h"
#include "ui_title_panel_widget.h"

title_panel_widget::title_panel_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::title_panel_widget)
{
    ui->setupUi(this);
}

title_panel_widget::~title_panel_widget()
{
    delete ui;
}
