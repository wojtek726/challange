#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QPaintEvent>
#include <QPainter>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:


private:
    Ui::Dialog *ui;
    void paintEvent(QPaintEvent *e);
    bool tarcza = false;
};

#endif // DIALOG_H
