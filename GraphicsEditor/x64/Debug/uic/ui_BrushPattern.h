/********************************************************************************
** Form generated from reading UI file 'BrushPattern.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BRUSHPATTERN_H
#define UI_BRUSHPATTERN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_BrushPattern
{
public:

    void setupUi(QLabel *BrushPattern)
    {
        if (BrushPattern->objectName().isEmpty())
            BrushPattern->setObjectName(QString::fromUtf8("BrushPattern"));
        BrushPattern->resize(400, 300);
        BrushPattern->setAutoFillBackground(true);

        retranslateUi(BrushPattern);

        QMetaObject::connectSlotsByName(BrushPattern);
    } // setupUi

    void retranslateUi(QLabel *BrushPattern)
    {
        BrushPattern->setWindowTitle(QCoreApplication::translate("BrushPattern", "BrushPattern", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BrushPattern: public Ui_BrushPattern {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BRUSHPATTERN_H
