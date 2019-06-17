#ifndef CENTER_WIDGET_H
#define CENTER_WIDGET_H

#include <QWidget>

namespace Ui {
class center_widget;
}

class center_widget : public QWidget
{
    Q_OBJECT

public:
    explicit center_widget(QWidget *parent = 0);
    ~center_widget();

private:
    Ui::center_widget *ui;
};

#endif // CENTER_WIDGET_H
