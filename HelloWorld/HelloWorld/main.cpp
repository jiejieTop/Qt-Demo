/*
 * @Author: jiejie
 * @Github: https://github.com/jiejieTop
 * @Date: 2019-12-07 23:41:57
 * @LastEditTime: 2019-12-07 23:50:57
 * @Description: the code belongs to jiejie, please keep the author information and source code according to the license.
 */
#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
