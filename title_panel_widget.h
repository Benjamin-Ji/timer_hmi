#ifndef TITLE_PANEL_WIDGET_H
#define TITLE_PANEL_WIDGET_H

#include <QWidget>

namespace Ui {
class title_panel_widget;
}

class title_panel_widget : public QWidget
{
    Q_OBJECT

public:
    explicit title_panel_widget(QWidget *parent = 0);
    ~title_panel_widget();

private:
    Ui::title_panel_widget *ui;


public slots:
    void timer_updata(void);





};

#endif // TITLE_PANEL_WIDGET_H
