#ifndef INDICATOR_LIGHT_WIDGET_H
#define INDICATOR_LIGHT_WIDGET_H

#include <QWidget>

namespace Ui {
class indicator_light_widget;
}

class indicator_light_widget : public QWidget
{
    Q_OBJECT

public:
    explicit indicator_light_widget(QWidget *parent = 0);
    ~indicator_light_widget();

private:
    Ui::indicator_light_widget *ui;
};

#endif // INDICATOR_LIGHT_WIDGET_H
