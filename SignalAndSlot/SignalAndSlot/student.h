/*
 * @Author: jiejie
 * @Github: https://github.com/jiejieTop
 * @Date: 2019-12-07 20:38:10
 * @LastEditTime: 2019-12-07 23:51:46
 * @Description: the code belongs to jiejie, please keep the author information and source code according to the license.
 */
#ifndef STUDENT_H
#define STUDENT_H

#include <QObject>

class Student : public QObject
{
    Q_OBJECT
public:
    explicit Student(QObject *parent = nullptr);

signals:

public slots:
    // 槽函数
    void treat();

    // 有参数
    void treat(QString foodName);

};

#endif // STUDENT_H
