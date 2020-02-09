#include "ezrivet.h"
#include "ui_ezrivet.h"

EzRivet::EzRivet(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::EzRivet)
{
    ui->setupUi(this);
}

EzRivet::~EzRivet()
{
    delete ui;
}


void EzRivet::on_pushButton_clicked()
{

}
