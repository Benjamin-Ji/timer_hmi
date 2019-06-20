#ifndef EXT_SRC_BCODE_H
#define EXT_SRC_BCODE_H

#include <QWidget>

namespace Ui {
class ext_src_bcode;
}

class ext_src_bcode : public QWidget
{
    Q_OBJECT

public:
    explicit ext_src_bcode(QWidget *parent = 0);
    ~ext_src_bcode();

private:
    Ui::ext_src_bcode *ui;
};

#endif // EXT_SRC_BCODE_H
