#ifndef L1_EXT_SRC_WIDGET_H
#define L1_EXT_SRC_WIDGET_H

#include <QWidget>

namespace Ui {
class l1_ext_src_widget;
}

class l1_ext_src_widget : public QWidget
{
    Q_OBJECT

public:
    explicit l1_ext_src_widget(QWidget *parent = 0);
    ~l1_ext_src_widget();

private:
    Ui::l1_ext_src_widget *ui;
};

#endif // L1_EXT_SRC_WIDGET_H
