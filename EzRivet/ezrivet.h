#ifndef EZRIVET_H
#define EZRIVET_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class EzRivet; }
QT_END_NAMESPACE

class EzRivet : public QMainWindow
{
    Q_OBJECT

public:
    EzRivet(QWidget *parent = nullptr);
    ~EzRivet();

private slots:
    void on_pushButton_clicked();

private:
    Ui::EzRivet *ui;
};
#endif // EZRIVET_H
