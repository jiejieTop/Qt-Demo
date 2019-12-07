/*
 * @Author: jiejie
 * @Github: https://github.com/jiejieTop
 * @Date: 2019-12-07 20:38:10
 * @LastEditTime: 2019-12-07 23:51:42
 * @Description: the code belongs to jiejie, please keep the author information and source code according to the license.
 */
#include "student.h"
#include <QtDebug>

Student::Student(QObject *parent) : QObject(parent)
{

}


void Student::treat()
{
    qDebug() << "请老师吃饭";
}

void Student::treat(QString foodName)
{
    qDebug() << "请老师吃" << foodName.toUtf8().data();
}
