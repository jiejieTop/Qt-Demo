/*
 * @Author: jiejie
 * @Github: https://github.com/jiejieTop
 * @Date: 2019-12-07 20:38:10
 * @LastEditTime: 2019-12-07 23:51:33
 * @Description: the code belongs to jiejie, please keep the author information and source code according to the license.
 */
#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}
