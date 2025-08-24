/********************************************************************************
** Form generated from reading UI file 'calc.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALC_H
#define UI_CALC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calc
{
public:
    QWidget *centralwidget;
    QPushButton *oneButton;
    QPushButton *twoButton;
    QPushButton *equalsButton;
    QPushButton *additionButton;
    QLabel *result;
    QPushButton *clearButton;
    QPushButton *threeButton;
    QPushButton *fourButton;
    QPushButton *fiveButton;
    QPushButton *sixButton;
    QPushButton *nineButton;
    QPushButton *eightButton;
    QPushButton *sevenButton;
    QPushButton *zeroButton;
    QPushButton *additionButton_2;
    QPushButton *multiplyButton;
    QPushButton *divisionButton;
    QMenuBar *menubar;
    QMenu *menuCalculator;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calc)
    {
        if (Calc->objectName().isEmpty())
            Calc->setObjectName("Calc");
        Calc->resize(800, 600);
        centralwidget = new QWidget(Calc);
        centralwidget->setObjectName("centralwidget");
        oneButton = new QPushButton(centralwidget);
        oneButton->setObjectName("oneButton");
        oneButton->setGeometry(QRect(10, 270, 80, 24));
        twoButton = new QPushButton(centralwidget);
        twoButton->setObjectName("twoButton");
        twoButton->setGeometry(QRect(120, 270, 80, 24));
        equalsButton = new QPushButton(centralwidget);
        equalsButton->setObjectName("equalsButton");
        equalsButton->setGeometry(QRect(120, 300, 181, 31));
        additionButton = new QPushButton(centralwidget);
        additionButton->setObjectName("additionButton");
        additionButton->setGeometry(QRect(10, 140, 80, 61));
        result = new QLabel(centralwidget);
        result->setObjectName("result");
        result->setGeometry(QRect(20, 10, 471, 61));
        clearButton = new QPushButton(centralwidget);
        clearButton->setObjectName("clearButton");
        clearButton->setGeometry(QRect(190, 70, 111, 131));
        threeButton = new QPushButton(centralwidget);
        threeButton->setObjectName("threeButton");
        threeButton->setGeometry(QRect(220, 270, 80, 24));
        fourButton = new QPushButton(centralwidget);
        fourButton->setObjectName("fourButton");
        fourButton->setGeometry(QRect(10, 240, 80, 24));
        fiveButton = new QPushButton(centralwidget);
        fiveButton->setObjectName("fiveButton");
        fiveButton->setGeometry(QRect(120, 240, 80, 24));
        sixButton = new QPushButton(centralwidget);
        sixButton->setObjectName("sixButton");
        sixButton->setGeometry(QRect(220, 240, 80, 24));
        nineButton = new QPushButton(centralwidget);
        nineButton->setObjectName("nineButton");
        nineButton->setGeometry(QRect(220, 210, 80, 24));
        eightButton = new QPushButton(centralwidget);
        eightButton->setObjectName("eightButton");
        eightButton->setGeometry(QRect(120, 210, 80, 24));
        sevenButton = new QPushButton(centralwidget);
        sevenButton->setObjectName("sevenButton");
        sevenButton->setGeometry(QRect(10, 210, 80, 24));
        zeroButton = new QPushButton(centralwidget);
        zeroButton->setObjectName("zeroButton");
        zeroButton->setGeometry(QRect(10, 300, 81, 31));
        additionButton_2 = new QPushButton(centralwidget);
        additionButton_2->setObjectName("additionButton_2");
        additionButton_2->setGeometry(QRect(100, 140, 81, 61));
        multiplyButton = new QPushButton(centralwidget);
        multiplyButton->setObjectName("multiplyButton");
        multiplyButton->setGeometry(QRect(10, 70, 80, 61));
        divisionButton = new QPushButton(centralwidget);
        divisionButton->setObjectName("divisionButton");
        divisionButton->setGeometry(QRect(100, 70, 80, 61));
        Calc->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calc);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuCalculator = new QMenu(menubar);
        menuCalculator->setObjectName("menuCalculator");
        Calc->setMenuBar(menubar);
        statusbar = new QStatusBar(Calc);
        statusbar->setObjectName("statusbar");
        Calc->setStatusBar(statusbar);

        menubar->addAction(menuCalculator->menuAction());

        retranslateUi(Calc);

        QMetaObject::connectSlotsByName(Calc);
    } // setupUi

    void retranslateUi(QMainWindow *Calc)
    {
        Calc->setWindowTitle(QCoreApplication::translate("Calc", "Calc", nullptr));
        oneButton->setText(QCoreApplication::translate("Calc", "1", nullptr));
        twoButton->setText(QCoreApplication::translate("Calc", "2", nullptr));
        equalsButton->setText(QCoreApplication::translate("Calc", "=", nullptr));
        additionButton->setText(QCoreApplication::translate("Calc", "+", nullptr));
        result->setText(QCoreApplication::translate("Calc", "null", nullptr));
        clearButton->setText(QCoreApplication::translate("Calc", "clear", nullptr));
        threeButton->setText(QCoreApplication::translate("Calc", "3", nullptr));
        fourButton->setText(QCoreApplication::translate("Calc", "4", nullptr));
        fiveButton->setText(QCoreApplication::translate("Calc", "5", nullptr));
        sixButton->setText(QCoreApplication::translate("Calc", "6", nullptr));
        nineButton->setText(QCoreApplication::translate("Calc", "9", nullptr));
        eightButton->setText(QCoreApplication::translate("Calc", "8", nullptr));
        sevenButton->setText(QCoreApplication::translate("Calc", "7", nullptr));
        zeroButton->setText(QCoreApplication::translate("Calc", "0", nullptr));
        additionButton_2->setText(QCoreApplication::translate("Calc", "-", nullptr));
        multiplyButton->setText(QCoreApplication::translate("Calc", "*", nullptr));
        divisionButton->setText(QCoreApplication::translate("Calc", "/", nullptr));
        menuCalculator->setTitle(QCoreApplication::translate("Calc", "Calculator", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calc: public Ui_Calc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALC_H
