#ifndef EXT_SRC_SWAVE_H
#define EXT_SRC_SWAVE_H

#include <QWidget>

namespace Ui {
class ext_src_swave;
}

class ext_src_swave : public QWidget
{
    Q_OBJECT

public:
    explicit ext_src_swave(QWidget *parent = 0);
    ~ext_src_swave();

private:
    Ui::ext_src_swave *ui;
};

#endif // EXT_SRC_SWAVE_H
