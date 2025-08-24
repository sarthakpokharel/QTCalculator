#include "calc.h"
#include "./ui_calc.h"

Calc::Calc(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calc)
{
    ui->setupUi(this);
}

Calc::~Calc()
{
    delete ui;
}

QString view_all_numbers;

std::vector<double> numbers;
std::vector<char> operators;

QString currentNumber;

void Calc::on_oneButton_clicked()
{
    view_all_numbers += "1";
    currentNumber += "1";
    ui->result->setText(view_all_numbers);
}

void Calc::on_twoButton_clicked()
{
    view_all_numbers += "2";
    currentNumber += "2";
    ui->result->setText(view_all_numbers);
}

void Calc::on_equalsButton_clicked()
{
    if (!currentNumber.isEmpty()) {
        numbers.push_back(currentNumber.toInt());
        currentNumber.clear();
    }

    // bodmas rile not applied
    double result = numbers[0];
    for (size_t i = 0; i < operators.size(); ++i) {
        char op = operators[i];
        double num = numbers[i+1];
        if (op == '+') result += num;
        else if (op == '-') result -= num;
        else if (op == '*') result *= num;
        else if (op == '/') result /= num;
    }

    view_all_numbers += "=" + QString::number(result);
    ui->result->setText(view_all_numbers);

    numbers.clear();
    operators.clear();

}

void Calc::on_additionButton_clicked()
{
    if (!currentNumber.isEmpty()) {
        numbers.push_back(currentNumber.toInt());
        currentNumber.clear();
    }

    operators.push_back('+');
    view_all_numbers += "+";
    ui->result->setText(view_all_numbers);
}


void Calc::on_clearButton_clicked()
{
    view_all_numbers.clear();
    ui->result->setText("null");

    numbers.clear();
    operators.clear();
    currentNumber.clear();
}


void Calc::on_threeButton_clicked()
{
    view_all_numbers += "3";
    currentNumber += "3";
    ui->result->setText(view_all_numbers);
}


void Calc::on_fourButton_clicked()
{
    view_all_numbers += "4";
    currentNumber += "4";
    ui->result->setText(view_all_numbers);
}


void Calc::on_fiveButton_clicked()
{
    view_all_numbers += "5";
    currentNumber += "5";
    ui->result->setText(view_all_numbers);
}


void Calc::on_sixButton_clicked()
{
    view_all_numbers += "6";
    currentNumber += "6";
    ui->result->setText(view_all_numbers);
}


void Calc::on_sevenButton_clicked()
{
    view_all_numbers += "7";
    currentNumber += "7";
    ui->result->setText(view_all_numbers);
}


void Calc::on_eightButton_clicked()
{
    view_all_numbers += "8";
    currentNumber += "8";
    ui->result->setText(view_all_numbers);
}


void Calc::on_nineButton_clicked()
{
    view_all_numbers += "9";
    currentNumber += "9";
    ui->result->setText(view_all_numbers);
}


void Calc::on_zeroButton_clicked()
{
    view_all_numbers += "0";
    currentNumber += "0";
    ui->result->setText(view_all_numbers);
}


void Calc::on_additionButton_2_clicked()
{
    //this is substraction, forgot to change object name
    if (!currentNumber.isEmpty()) {
        numbers.push_back(currentNumber.toInt());
        currentNumber.clear();
    }

    operators.push_back('-');
    view_all_numbers += "-";
    ui->result->setText(view_all_numbers);
}


void Calc::on_multiplyButton_clicked()
{
    if (!currentNumber.isEmpty()) {
        numbers.push_back(currentNumber.toInt());
        currentNumber.clear();
    }

    operators.push_back('*');
    view_all_numbers += "*";
    ui->result->setText(view_all_numbers);
}


void Calc::on_divisionButton_clicked()
{
    if (!currentNumber.isEmpty()) {
        numbers.push_back(currentNumber.toInt());
        currentNumber.clear();
    }

    operators.push_back('/');
    view_all_numbers += "/";
    ui->result->setText(view_all_numbers);
}

