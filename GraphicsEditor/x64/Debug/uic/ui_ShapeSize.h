/********************************************************************************
** Form generated from reading UI file 'ShapeSize.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHAPESIZE_H
#define UI_SHAPESIZE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <graphicseditorclass.h>

QT_BEGIN_NAMESPACE

class Ui_ShapeSize
{
public:

    void setupUi(GraphicsEditorClass *ShapeSize)
    {
        if (ShapeSize->objectName().isEmpty())
            ShapeSize->setObjectName(QString::fromUtf8("ShapeSize"));
        ShapeSize->resize(400, 300);

        retranslateUi(ShapeSize);

        QMetaObject::connectSlotsByName(ShapeSize);
    } // setupUi

    void retranslateUi(GraphicsEditorClass *ShapeSize)
    {
        ShapeSize->setWindowTitle(QCoreApplication::translate("ShapeSize", "ShapeSize", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShapeSize: public Ui_ShapeSize {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHAPESIZE_H
