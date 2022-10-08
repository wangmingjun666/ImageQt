#include "dialog_move_transform.h"
#include "ui_dialog_move_transform.h"

Dialog_move_transform::Dialog_move_transform(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog_move_transform)
{
    ui->setupUi(this);
    setWindowTitle("平移变换");
}

Dialog_move_transform::~Dialog_move_transform()
{
    delete ui;
}

void Dialog_move_transform::on_pushButton_clicked()
{
    this->close();
}

void Dialog_move_transform::on_pushButton_2_clicked()
{
    emit sendData(ui->lineEdit_x->text().toInt(), ui->lineEdit_y->text().toInt());
    this->close();
}
