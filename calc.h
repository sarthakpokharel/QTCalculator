#ifndef CALC_H
#define CALC_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Calc;
}
QT_END_NAMESPACE

class Calc : public QMainWindow
{
    Q_OBJECT

public:
    Calc(QWidget *parent = nullptr);
    ~Calc();

private slots:
    void on_pushButton_4_clicked();

    void on_oneButton_clicked();

    void on_equalsButton_clicked();

    void on_twoButton_clicked();

    void on_additionButton_clicked();

    void on_clearButton_clicked();

    void on_threeButton_clicked();

    void on_fourButton_clicked();

    void on_fiveButton_clicked();

    void on_sixButton_clicked();

    void on_sevenButton_clicked();

    void on_eightButton_clicked();

    void on_nineButton_clicked();

    void on_zeroButton_clicked();

    void on_additionButton_2_clicked();

    void on_multiplyButton_clicked();

    void on_divisionButton_clicked();

private:
    Ui::Calc *ui;
};
#endif // CALC_H
