#ifndef EXT_SRC_LNET_H
#define EXT_SRC_LNET_H

#include <QWidget>

namespace Ui {
class ext_src_lnet;
}

class ext_src_lnet : public QWidget
{
    Q_OBJECT

public:
    explicit ext_src_lnet(QWidget *parent = 0);
    ~ext_src_lnet();

private:
    Ui::ext_src_lnet *ui;
};

#endif // EXT_SRC_LNET_H
