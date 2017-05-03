/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created: Sun Apr 30 15:41:02 2017
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_widgetClass
{
public:
    QPushButton *setABLineButton;
    QPushButton *recvButton;
    QPushButton *pilotButton;
    QPushButton *exitButton;
    QLabel *deInitialLabel;
    QLineEdit *deInitialLine;
    QLabel *deNorthInitialLabel;
    QLineEdit *dNorthInitialLine;
    QLineEdit *xLine;
    QLineEdit *yLine;
    QLineEdit *norLine;
    QLabel *xPosition;
    QLabel *yPosition;
    QLabel *north;
    QLabel *deLabel;
    QLabel *dNorthLabel;
    QLineEdit *deLine;
    QLineEdit *dNorthLine;
    QLabel *faiLabel;
    QLabel *thetaLabel;
    QLabel *velocityLabel;
    QLineEdit *faiLine;
    QLineEdit *thetaLine;
    QLineEdit *velocityLine;

    void setupUi(QWidget *widgetClass)
    {
        if (widgetClass->objectName().isEmpty())
            widgetClass->setObjectName(QString::fromUtf8("widgetClass"));
        widgetClass->resize(796, 451);
        widgetClass->setLocale(QLocale(QLocale::Chinese, QLocale::China));
        setABLineButton = new QPushButton(widgetClass);
        setABLineButton->setObjectName(QString::fromUtf8("setABLineButton"));
        setABLineButton->setGeometry(QRect(320, 290, 171, 51));
        QFont font;
        font.setPointSize(15);
        setABLineButton->setFont(font);
        recvButton = new QPushButton(widgetClass);
        recvButton->setObjectName(QString::fromUtf8("recvButton"));
        recvButton->setGeometry(QRect(60, 290, 151, 51));
        recvButton->setFont(font);
        recvButton->setStyleSheet(QString::fromUtf8(""));
        pilotButton = new QPushButton(widgetClass);
        pilotButton->setObjectName(QString::fromUtf8("pilotButton"));
        pilotButton->setGeometry(QRect(590, 290, 151, 51));
        pilotButton->setFont(font);
        exitButton = new QPushButton(widgetClass);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(350, 390, 101, 51));
        exitButton->setFont(font);
        deInitialLabel = new QLabel(widgetClass);
        deInitialLabel->setObjectName(QString::fromUtf8("deInitialLabel"));
        deInitialLabel->setGeometry(QRect(26, 55, 161, 31));
        deInitialLabel->setFont(font);
        deInitialLabel->setLocale(QLocale(QLocale::Chinese, QLocale::China));
        deInitialLine = new QLineEdit(widgetClass);
        deInitialLine->setObjectName(QString::fromUtf8("deInitialLine"));
        deInitialLine->setGeometry(QRect(130, 50, 131, 31));
        deNorthInitialLabel = new QLabel(widgetClass);
        deNorthInitialLabel->setObjectName(QString::fromUtf8("deNorthInitialLabel"));
        deNorthInitialLabel->setGeometry(QRect(290, 50, 161, 31));
        deNorthInitialLabel->setFont(font);
        dNorthInitialLine = new QLineEdit(widgetClass);
        dNorthInitialLine->setObjectName(QString::fromUtf8("dNorthInitialLine"));
        dNorthInitialLine->setGeometry(QRect(440, 50, 121, 31));
        xLine = new QLineEdit(widgetClass);
        xLine->setObjectName(QString::fromUtf8("xLine"));
        xLine->setGeometry(QRect(130, 126, 129, 27));
        yLine = new QLineEdit(widgetClass);
        yLine->setObjectName(QString::fromUtf8("yLine"));
        yLine->setGeometry(QRect(130, 173, 129, 27));
        norLine = new QLineEdit(widgetClass);
        norLine->setObjectName(QString::fromUtf8("norLine"));
        norLine->setGeometry(QRect(130, 220, 129, 27));
        xPosition = new QLabel(widgetClass);
        xPosition->setObjectName(QString::fromUtf8("xPosition"));
        xPosition->setGeometry(QRect(31, 121, 101, 26));
        xPosition->setFont(font);
        yPosition = new QLabel(widgetClass);
        yPosition->setObjectName(QString::fromUtf8("yPosition"));
        yPosition->setGeometry(QRect(31, 166, 91, 26));
        yPosition->setFont(font);
        north = new QLabel(widgetClass);
        north->setObjectName(QString::fromUtf8("north"));
        north->setGeometry(QRect(31, 211, 91, 26));
        north->setFont(font);
        deLabel = new QLabel(widgetClass);
        deLabel->setObjectName(QString::fromUtf8("deLabel"));
        deLabel->setGeometry(QRect(290, 140, 121, 26));
        deLabel->setFont(font);
        dNorthLabel = new QLabel(widgetClass);
        dNorthLabel->setObjectName(QString::fromUtf8("dNorthLabel"));
        dNorthLabel->setGeometry(QRect(291, 189, 141, 26));
        dNorthLabel->setFont(font);
        deLine = new QLineEdit(widgetClass);
        deLine->setObjectName(QString::fromUtf8("deLine"));
        deLine->setGeometry(QRect(390, 140, 129, 27));
        deLine->setReadOnly(false);
        dNorthLine = new QLineEdit(widgetClass);
        dNorthLine->setObjectName(QString::fromUtf8("dNorthLine"));
        dNorthLine->setGeometry(QRect(390, 190, 129, 27));
        faiLabel = new QLabel(widgetClass);
        faiLabel->setObjectName(QString::fromUtf8("faiLabel"));
        faiLabel->setGeometry(QRect(560, 122, 80, 26));
        faiLabel->setFont(font);
        thetaLabel = new QLabel(widgetClass);
        thetaLabel->setObjectName(QString::fromUtf8("thetaLabel"));
        thetaLabel->setGeometry(QRect(560, 167, 71, 31));
        thetaLabel->setFont(font);
        velocityLabel = new QLabel(widgetClass);
        velocityLabel->setObjectName(QString::fromUtf8("velocityLabel"));
        velocityLabel->setGeometry(QRect(560, 212, 81, 26));
        velocityLabel->setFont(font);
        faiLine = new QLineEdit(widgetClass);
        faiLine->setObjectName(QString::fromUtf8("faiLine"));
        faiLine->setGeometry(QRect(640, 116, 129, 27));
        thetaLine = new QLineEdit(widgetClass);
        thetaLine->setObjectName(QString::fromUtf8("thetaLine"));
        thetaLine->setGeometry(QRect(640, 163, 129, 27));
        velocityLine = new QLineEdit(widgetClass);
        velocityLine->setObjectName(QString::fromUtf8("velocityLine"));
        velocityLine->setGeometry(QRect(640, 210, 129, 27));
#ifndef QT_NO_SHORTCUT
        deInitialLabel->setBuddy(deInitialLine);
        deNorthInitialLabel->setBuddy(dNorthInitialLine);
        xPosition->setBuddy(xLine);
        yPosition->setBuddy(yLine);
        north->setBuddy(norLine);
        deLabel->setBuddy(deLine);
        dNorthLabel->setBuddy(dNorthLine);
        faiLabel->setBuddy(faiLine);
        thetaLabel->setBuddy(thetaLine);
        velocityLabel->setBuddy(velocityLine);
#endif // QT_NO_SHORTCUT

        retranslateUi(widgetClass);
        QObject::connect(recvButton, SIGNAL(clicked()), widgetClass, SLOT(receive_data()));
        QObject::connect(setABLineButton, SIGNAL(clicked()), widgetClass, SLOT(setABLine()));
        QObject::connect(setABLineButton, SIGNAL(clicked()), widgetClass, SLOT(start_autopilot()));
        QObject::connect(exitButton, SIGNAL(clicked()), widgetClass, SLOT(close()));

        QMetaObject::connectSlotsByName(widgetClass);
    } // setupUi

    void retranslateUi(QWidget *widgetClass)
    {
        widgetClass->setWindowTitle(QApplication::translate("widgetClass", "Widget", 0, QApplication::UnicodeUTF8));
        setABLineButton->setText(QApplication::translate("widgetClass", "setABLine", 0, QApplication::UnicodeUTF8));
        recvButton->setText(QApplication::translate("widgetClass", "Start Receive", 0, QApplication::UnicodeUTF8));
        pilotButton->setText(QApplication::translate("widgetClass", "Autopilot", 0, QApplication::UnicodeUTF8));
        exitButton->setText(QApplication::translate("widgetClass", "Exit", 0, QApplication::UnicodeUTF8));
        deInitialLabel->setText(QApplication::translate("widgetClass", "disInitial", 0, QApplication::UnicodeUTF8));
        deNorthInitialLabel->setText(QApplication::translate("widgetClass", "dNorthInitial", 0, QApplication::UnicodeUTF8));
        xPosition->setText(QApplication::translate("widgetClass", "XPosition", 0, QApplication::UnicodeUTF8));
        yPosition->setText(QApplication::translate("widgetClass", "YPosition", 0, QApplication::UnicodeUTF8));
        north->setText(QApplication::translate("widgetClass", "North", 0, QApplication::UnicodeUTF8));
        deLabel->setText(QApplication::translate("widgetClass", "distance", 0, QApplication::UnicodeUTF8));
        dNorthLabel->setText(QApplication::translate("widgetClass", "dNorth", 0, QApplication::UnicodeUTF8));
        faiLabel->setText(QApplication::translate("widgetClass", "fai", 0, QApplication::UnicodeUTF8));
        thetaLabel->setText(QApplication::translate("widgetClass", "theta", 0, QApplication::UnicodeUTF8));
        velocityLabel->setText(QApplication::translate("widgetClass", "velocity", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class widgetClass: public Ui_widgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
