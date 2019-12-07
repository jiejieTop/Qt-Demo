/*
 * @Author: jiejie
 * @Github: https://github.com/jiejieTop
 * @Date: 2019-12-07 20:38:10
 * @LastEditTime: 2019-12-07 23:51:53
 * @Description: the code belongs to jiejie, please keep the author information and source code according to the license.
 */
#ifndef TEACHER_H
#define TEACHER_H

#include <QObject>

class Teacher : public QObject
{
    Q_OBJECT
public:
    explicit Teacher(QObject *parent = nullptr);

signals:
    // 自定义信号
    void hungry();

    // 有参数
    void hungry(QString foodName);

public slots:
};

#endif // TEACHER_H
