#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>
#include <QTreeWidgetItem>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->thankyou->setVisible(false);
    ui->herearonia->setVisible(false);
    ui->herecoffee->setVisible(false);
    ui->heretea->setVisible(false);
    ui->givememoney->setVisible(false);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_toolButton_5_clicked()
{
    ui->lcdNumber->setProperty("intValue",ui->lcdNumber->intValue()+500);
    ui->thankyou->setVisible(false);
    ui->herearonia->setVisible(false);
    ui->herecoffee->setVisible(false);
    ui->heretea->setVisible(false);
    ui->givememoney->setVisible(false);
}

void Widget::on_toolButton_6_clicked()
{
    ui->lcdNumber->setProperty("intValue",ui->lcdNumber->intValue()+100);
    ui->thankyou->setVisible(false);
    ui->herearonia->setVisible(false);
    ui->herecoffee->setVisible(false);
    ui->heretea->setVisible(false);
    ui->givememoney->setVisible(false);
}

void Widget::on_toolButton_8_clicked()
{
    ui->lcdNumber->setProperty("intValue",ui->lcdNumber->intValue()+50);
    ui->thankyou->setVisible(false);
    ui->herearonia->setVisible(false);
    ui->herecoffee->setVisible(false);
    ui->heretea->setVisible(false);
    ui->givememoney->setVisible(false);
}

void Widget::on_toolButton_7_clicked()
{
    ui->lcdNumber->setProperty("intValue",ui->lcdNumber->intValue()+10);
    ui->thankyou->setVisible(false);
    ui->herearonia->setVisible(false);
    ui->herecoffee->setVisible(false);
    ui->heretea->setVisible(false);
    ui->givememoney->setVisible(false);
}

void Widget::on_buycoffee_clicked()
{
    ui->thankyou->setVisible(false);
    ui->herearonia->setVisible(false);
    ui->herecoffee->setVisible(false);
    ui->heretea->setVisible(false);
    ui->givememoney->setVisible(false);
    if(ui->lcdNumber->intValue() >= 150){
        ui->lcdNumber->setProperty("intValue",ui->lcdNumber->intValue()-150);
        ui->herecoffee->setVisible(true);
        ui->thankyou->setVisible(true);
    }
    else{
        ui->givememoney->setVisible(true);
    }
}

void Widget::on_buytea_clicked()
{
    ui->thankyou->setVisible(false);
    ui->herearonia->setVisible(false);
    ui->herecoffee->setVisible(false);
    ui->heretea->setVisible(false);
    ui->givememoney->setVisible(false);
    if(ui->lcdNumber->intValue() >= 100){
        ui->lcdNumber->setProperty("intValue",ui->lcdNumber->intValue()-100);
        ui->heretea->setVisible(true);
        ui->thankyou->setVisible(true);
    }
    else{
        ui->givememoney->setVisible(true);
    }
}

void Widget::on_buyaronia_clicked()
{
    ui->thankyou->setVisible(false);
    ui->herearonia->setVisible(false);
    ui->herecoffee->setVisible(false);
    ui->heretea->setVisible(false);
    ui->givememoney->setVisible(false);
    if(ui->lcdNumber->intValue() >= 300){
        ui->lcdNumber->setProperty("intValue",ui->lcdNumber->intValue()-300);
        ui->herearonia->setVisible(true);
        ui->thankyou->setVisible(true);
    }
    else{
        ui->givememoney->setVisible(true);
    }
}
