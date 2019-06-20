#ifndef SYSINFO_REF_SRC_H
#define SYSINFO_REF_SRC_H

#include <QWidget>

namespace Ui {
class sysinfo_ref_src;
}

class sysinfo_ref_src : public QWidget
{
    Q_OBJECT

public:
    explicit sysinfo_ref_src(QWidget *parent = 0);
    ~sysinfo_ref_src();

private:
    Ui::sysinfo_ref_src *ui;
};

#endif // SYSINFO_REF_SRC_H
