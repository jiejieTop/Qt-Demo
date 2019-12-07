/*
 * @Author: jiejie
 * @Github: https://github.com/jiejieTop
 * @Date: 2019-12-07 20:38:10
 * @LastEditTime: 2019-12-07 23:51:59
 * @Description: the code belongs to jiejie, please keep the author information and source code according to the license.
 */
#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "student.h"
#include "teacher.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void classIsOver();

private:
    Ui::Widget *ui;

    Teacher * tc;
    Student * st;

};
#endif // WIDGET_H
