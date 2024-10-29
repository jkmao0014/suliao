#include "widget.h"
#include "ui_widget.h"


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{

    ui->setupUi(this);
    ui->web_widget->setUrl(QUrl("http://127.0.0.1:8000/高德创建地图API.html"));
}

Widget::~Widget()
{
    delete ui;
}
