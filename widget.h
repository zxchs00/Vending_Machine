#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:

    void on_toolButton_5_clicked();

    void on_toolButton_6_clicked();

    void on_toolButton_8_clicked();

    void on_toolButton_7_clicked();

    void on_buycoffee_clicked();

    void on_buytea_clicked();

    void on_buyaronia_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
