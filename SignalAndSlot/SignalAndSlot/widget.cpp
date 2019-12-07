/*
 * @Author: jiejie
 * @Github: https://github.com/jiejieTop
 * @Date: 2019-12-07 20:38:10
 * @LastEditTime: 2019-12-07 23:51:56
 * @Description: the code belongs to jiejie, please keep the author information and source code according to the license.
 */
#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    this->resize(600,400);

    QPushButton *btn = new QPushButton("下课",this);


    this->tc = new Teacher(this);

    this->st = new Student(this);

    // 有参数的
    void (Teacher:: *teacherSignal)(QString) = &Teacher::hungry;
    void (Student:: *studentSlot)(QString) = &Student::treat;
    connect(tc,teacherSignal,st,studentSlot);

    // 没有参数的
    void (Teacher:: *teacherSignal1)() = &Teacher::hungry;
    void (Student:: *studentSlot1)() = &Student::treat;
    connect(tc,teacherSignal1,st,studentSlot1);

    connect(btn,&QPushButton::clicked,this,&Widget::classIsOver);

    // 信号连接信号
    connect(btn,&QPushButton::clicked,tc,teacherSignal1);

    disconnect(tc,teacherSignal,st,studentSlot);

//    classIsOver();
}

void Widget::classIsOver()
{
    emit tc->hungry();
    emit tc->hungry("番茄炒蛋");
}


Widget::~Widget()
{
    delete ui;
}


