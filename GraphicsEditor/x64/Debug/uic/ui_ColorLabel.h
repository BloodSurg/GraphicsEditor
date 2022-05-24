/********************************************************************************
** Form generated from reading UI file 'ColorLabel.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORLABEL_H
#define UI_COLORLABEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_ColorLabel
{
public:

    void setupUi(QLabel *ColorLabel)
    {
        if (ColorLabel->objectName().isEmpty())
            ColorLabel->setObjectName(QString::fromUtf8("ColorLabel"));
        ColorLabel->resize(400, 300);

        retranslateUi(ColorLabel);

        QMetaObject::connectSlotsByName(ColorLabel);
    } // setupUi

    void retranslateUi(QLabel *ColorLabel)
    {
        ColorLabel->setWindowTitle(QCoreApplication::translate("ColorLabel", "ColorLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ColorLabel: public Ui_ColorLabel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORLABEL_H
