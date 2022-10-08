#ifndef DIALOG_MOVE_TRANSFORM_H
#define DIALOG_MOVE_TRANSFORM_H

#include <QDialog>

namespace Ui {
class Dialog_move_transform;
}

class Dialog_move_transform : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_move_transform(QWidget *parent = nullptr);
    ~Dialog_move_transform();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();
signals:
    void sendData(int, int);

private:
    Ui::Dialog_move_transform *ui;
};

#endif // DIALOG_MOVE_TRANSFORM_H
