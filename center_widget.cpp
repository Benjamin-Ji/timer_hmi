#include "center_widget.h"
#include "ui_center_widget.h"

center_widget::center_widget(QWidget *parent,QString pb1_name,QString pb2_name,QString pb3_name,QString pb4_name,QString pb5_name,QString pb6_name,QString pb7_name,QString pb8_name) :
    QWidget(parent),
    ui(new Ui::center_widget)
{
    ui->setupUi(this);
    ui->pb1->setText(pb1_name);
    ui->pb2->setText(pb2_name);
    ui->pb3->setText(pb3_name);
    ui->pb4->setText(pb4_name);
    ui->pb5->setText(pb5_name);
    ui->pb6->setText(pb6_name);
    ui->pb7->setText(pb7_name);
    ui->pb8->setText(pb8_name);

    pb_init();

    ui->stackedWidget->setCurrentIndex(0);

}


center_widget::~center_widget()
{
    delete ui;
}


void center_widget::insert_widget(int index,QWidget *widget)
{
    ui->stackedWidget->insertWidget(index,widget);

}


void center_widget::set_current_index(int index)
{
    ui->stackedWidget->setCurrentIndex(index);

}


void center_widget::pb_init()
{

    pb_group=new QButtonGroup(this);

    pb_group->addButton(ui->pb1);
    pb_group->addButton(ui->pb2);
    pb_group->addButton(ui->pb3);
    pb_group->addButton(ui->pb4);
    pb_group->addButton(ui->pb5);
    pb_group->addButton(ui->pb6);
    pb_group->addButton(ui->pb7);
    pb_group->addButton(ui->pb8);


    pb_list=pb_group->buttons();

    foreach (QAbstractButton *pb, pb_list) {
        pb->setCheckable(true);
        if(pb->text().isEmpty())
        {
            pb->setEnabled(false);
        }else{
            pb->setCheckable(true);
        }
    }

    pb_group->setExclusive(true);

    ui->pb1->setChecked(true);

}



void center_widget::set_current_widget()
{
    foreach (QAbstractButton *pb, pb_list) {
        if(pb->isChecked())
            ui->stackedWidget->setCurrentIndex(pb_list.indexOf(pb));
    }
}
