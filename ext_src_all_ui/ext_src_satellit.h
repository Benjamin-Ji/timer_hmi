#ifndef EXT_SRC_SATELLIT_H
#define EXT_SRC_SATELLIT_H

#include <QWidget>

namespace Ui {
class ext_src_satellit;
}

class ext_src_satellit : public QWidget
{
    Q_OBJECT

public:
    explicit ext_src_satellit(QWidget *parent = 0);
    ~ext_src_satellit();

private:
    Ui::ext_src_satellit *ui;
};

#endif // EXT_SRC_SATELLIT_H
