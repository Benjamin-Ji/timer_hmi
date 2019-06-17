#ifndef L1_INNER_SRC_WIDGET_H
#define L1_INNER_SRC_WIDGET_H

#include <QWidget>

namespace Ui {
class l1_inner_src_widget;
}

class l1_inner_src_widget : public QWidget
{
    Q_OBJECT

public:
    explicit l1_inner_src_widget(QWidget *parent = 0);
    ~l1_inner_src_widget();

private:
    Ui::l1_inner_src_widget *ui;
};

#endif // L1_INNER_SRC_WIDGET_H
