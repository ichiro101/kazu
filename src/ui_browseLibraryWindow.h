/********************************************************************************
** Form generated from reading UI file 'browseLibraryWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BROWSELIBRARYWINDOW_H
#define UI_BROWSELIBRARYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BrowseLibraryWindow
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *viewSelector;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QTreeView *treeView;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *BrowseLibraryWindow)
    {
        if (BrowseLibraryWindow->objectName().isEmpty())
            BrowseLibraryWindow->setObjectName(QStringLiteral("BrowseLibraryWindow"));
        BrowseLibraryWindow->resize(438, 425);
        verticalLayout = new QVBoxLayout(BrowseLibraryWindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(BrowseLibraryWindow);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        viewSelector = new QComboBox(BrowseLibraryWindow);
        viewSelector->setObjectName(QStringLiteral("viewSelector"));

        horizontalLayout->addWidget(viewSelector);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(BrowseLibraryWindow);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit = new QLineEdit(BrowseLibraryWindow);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        treeView = new QTreeView(BrowseLibraryWindow);
        treeView->setObjectName(QStringLiteral("treeView"));

        verticalLayout->addWidget(treeView);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton = new QPushButton(BrowseLibraryWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(BrowseLibraryWindow);

        QMetaObject::connectSlotsByName(BrowseLibraryWindow);
    } // setupUi

    void retranslateUi(QDialog *BrowseLibraryWindow)
    {
        BrowseLibraryWindow->setWindowTitle(QApplication::translate("BrowseLibraryWindow", "Dialog", 0));
        label->setText(QApplication::translate("BrowseLibraryWindow", "View", 0));
        label_2->setText(QApplication::translate("BrowseLibraryWindow", "Text Filter", 0));
        pushButton->setText(QApplication::translate("BrowseLibraryWindow", "Done", 0));
    } // retranslateUi

};

namespace Ui {
    class BrowseLibraryWindow: public Ui_BrowseLibraryWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BROWSELIBRARYWINDOW_H
