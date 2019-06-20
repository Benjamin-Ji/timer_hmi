#include "main_widget.h"
#include <QApplication>
#include <qdebug.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    main_widget w;
    w.show();

    qDebug() << "QWidget";
    qDebug() << w.x();
    qDebug() << w.y();
    qDebug() << w.width();
    qDebug() << w.height();

    qDebug() << "QWidget::geometry";
    qDebug() << w.geometry().x();
    qDebug() << w.geometry().y();
    qDebug() << w.geometry().width();
    qDebug() << w.geometry().height();

    qDebug() << "QWidget::frameGeometry";
    qDebug() << w.frameGeometry().x();
    qDebug() << w.frameGeometry().y();
    qDebug() << w.frameGeometry().width();
    qDebug() << w.frameGeometry().height();


    return a.exec();
}
