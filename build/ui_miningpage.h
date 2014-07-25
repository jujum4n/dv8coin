/********************************************************************************
** Form generated from reading UI file 'miningpage.ui'
**
** Created: Tue Apr 1 19:06:37 2014
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MININGPAGE_H
#define UI_MININGPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MiningPage
{
public:
    QGridLayout *gridLayout;
    QLabel *passwordLabel;
    QLabel *serverLabel;
    QLineEdit *usernameLine;
    QLineEdit *serverLine;
    QLabel *usernameLabel;
    QLabel *portLabel;
    QPushButton *startButton;
    QFrame *line;
    QListWidget *list;
    QLabel *shareCount;
    QLabel *scantimeLabel;
    QCheckBox *debugCheckBox;
    QLabel *typeLabel;
    QSpinBox *threadsBox;
    QComboBox *typeBox;
    QSpinBox *scantimeBox;
    QLineEdit *portLine;
    QLineEdit *passwordLine;
    QLabel *mineSpeedLabel;
    QLabel *threadsLabel;

    void setupUi(QWidget *MiningPage)
    {
        if (MiningPage->objectName().isEmpty())
            MiningPage->setObjectName(QString::fromUtf8("MiningPage"));
        MiningPage->resize(780, 636);
        MiningPage->setStyleSheet(QString::fromUtf8("background-color:#04648A;\n"
"color:white;"));
        gridLayout = new QGridLayout(MiningPage);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        passwordLabel = new QLabel(MiningPage);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));
        passwordLabel->setEnabled(true);
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        passwordLabel->setFont(font);

        gridLayout->addWidget(passwordLabel, 6, 4, 1, 1);

        serverLabel = new QLabel(MiningPage);
        serverLabel->setObjectName(QString::fromUtf8("serverLabel"));
        serverLabel->setEnabled(true);
        serverLabel->setFont(font);

        gridLayout->addWidget(serverLabel, 6, 1, 1, 1);

        usernameLine = new QLineEdit(MiningPage);
        usernameLine->setObjectName(QString::fromUtf8("usernameLine"));
        usernameLine->setEnabled(true);
        usernameLine->setFont(font);
        usernameLine->setStyleSheet(QString::fromUtf8("border: 1px solid #022840;"));

        gridLayout->addWidget(usernameLine, 7, 3, 1, 1);

        serverLine = new QLineEdit(MiningPage);
        serverLine->setObjectName(QString::fromUtf8("serverLine"));
        serverLine->setEnabled(true);
        serverLine->setFont(font);
        serverLine->setStyleSheet(QString::fromUtf8("border: 1px solid #022840;"));

        gridLayout->addWidget(serverLine, 7, 1, 1, 1);

        usernameLabel = new QLabel(MiningPage);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));
        usernameLabel->setEnabled(true);
        usernameLabel->setFont(font);

        gridLayout->addWidget(usernameLabel, 6, 3, 1, 1);

        portLabel = new QLabel(MiningPage);
        portLabel->setObjectName(QString::fromUtf8("portLabel"));
        portLabel->setEnabled(true);
        portLabel->setFont(font);

        gridLayout->addWidget(portLabel, 6, 2, 1, 1);

        startButton = new QPushButton(MiningPage);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(startButton->sizePolicy().hasHeightForWidth());
        startButton->setSizePolicy(sizePolicy);
        startButton->setFont(font);

        gridLayout->addWidget(startButton, 3, 4, 1, 1);

        line = new QFrame(MiningPage);
        line->setObjectName(QString::fromUtf8("line"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy1);
        line->setMinimumSize(QSize(0, 20));
        line->setFont(font);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 8, 1, 1, 4);

        list = new QListWidget(MiningPage);
        list->setObjectName(QString::fromUtf8("list"));
        list->setFont(font);
        list->setStyleSheet(QString::fromUtf8("border: 1px solid #022840;"));
        list->setAutoScrollMargin(100000);
        list->setDragDropMode(QAbstractItemView::DragOnly);
        list->setSelectionMode(QAbstractItemView::NoSelection);
        list->setMovement(QListView::Snap);
        list->setBatchSize(10);

        gridLayout->addWidget(list, 13, 1, 1, 4);

        shareCount = new QLabel(MiningPage);
        shareCount->setObjectName(QString::fromUtf8("shareCount"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        shareCount->setFont(font1);

        gridLayout->addWidget(shareCount, 14, 1, 1, 2);

        scantimeLabel = new QLabel(MiningPage);
        scantimeLabel->setObjectName(QString::fromUtf8("scantimeLabel"));
        scantimeLabel->setEnabled(true);
        scantimeLabel->setFont(font);
        scantimeLabel->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(scantimeLabel, 3, 3, 1, 1);

        debugCheckBox = new QCheckBox(MiningPage);
        debugCheckBox->setObjectName(QString::fromUtf8("debugCheckBox"));
        debugCheckBox->setFont(font);

        gridLayout->addWidget(debugCheckBox, 4, 4, 1, 1);

        typeLabel = new QLabel(MiningPage);
        typeLabel->setObjectName(QString::fromUtf8("typeLabel"));
        typeLabel->setFont(font);

        gridLayout->addWidget(typeLabel, 3, 1, 1, 1);

        threadsBox = new QSpinBox(MiningPage);
        threadsBox->setObjectName(QString::fromUtf8("threadsBox"));
        threadsBox->setEnabled(true);
        threadsBox->setFont(font);
        threadsBox->setStyleSheet(QString::fromUtf8("border: 1px solid #022840;"));
        threadsBox->setMinimum(1);
        threadsBox->setMaximum(99);
        threadsBox->setSingleStep(1);

        gridLayout->addWidget(threadsBox, 4, 2, 1, 1);

        typeBox = new QComboBox(MiningPage);
        typeBox->setObjectName(QString::fromUtf8("typeBox"));
        typeBox->setFont(font);
        typeBox->setStyleSheet(QString::fromUtf8("border: 1px solid #022840;"));
        typeBox->setEditable(false);

        gridLayout->addWidget(typeBox, 4, 1, 1, 1);

        scantimeBox = new QSpinBox(MiningPage);
        scantimeBox->setObjectName(QString::fromUtf8("scantimeBox"));
        scantimeBox->setEnabled(true);
        scantimeBox->setFont(font);
        scantimeBox->setStyleSheet(QString::fromUtf8("border: 1px solid #022840;"));
        scantimeBox->setMinimum(1);
        scantimeBox->setValue(5);

        gridLayout->addWidget(scantimeBox, 4, 3, 1, 1);

        portLine = new QLineEdit(MiningPage);
        portLine->setObjectName(QString::fromUtf8("portLine"));
        portLine->setEnabled(true);
        portLine->setFont(font);
        portLine->setStyleSheet(QString::fromUtf8("border: 1px solid #022840;"));
        portLine->setProperty("value", QVariant(9332));

        gridLayout->addWidget(portLine, 7, 2, 1, 1);

        passwordLine = new QLineEdit(MiningPage);
        passwordLine->setObjectName(QString::fromUtf8("passwordLine"));
        passwordLine->setEnabled(true);
        passwordLine->setFont(font);
        passwordLine->setStyleSheet(QString::fromUtf8("border: 1px solid #022840;"));

        gridLayout->addWidget(passwordLine, 7, 4, 1, 1);

        mineSpeedLabel = new QLabel(MiningPage);
        mineSpeedLabel->setObjectName(QString::fromUtf8("mineSpeedLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mineSpeedLabel->sizePolicy().hasHeightForWidth());
        mineSpeedLabel->setSizePolicy(sizePolicy2);
        mineSpeedLabel->setFont(font1);
        mineSpeedLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mineSpeedLabel, 14, 3, 1, 2);

        threadsLabel = new QLabel(MiningPage);
        threadsLabel->setObjectName(QString::fromUtf8("threadsLabel"));
        threadsLabel->setEnabled(true);
        threadsLabel->setFont(font);

        gridLayout->addWidget(threadsLabel, 3, 2, 1, 1);

        QWidget::setTabOrder(startButton, typeBox);
        QWidget::setTabOrder(typeBox, threadsBox);
        QWidget::setTabOrder(threadsBox, scantimeBox);
        QWidget::setTabOrder(scantimeBox, serverLine);
        QWidget::setTabOrder(serverLine, portLine);
        QWidget::setTabOrder(portLine, usernameLine);
        QWidget::setTabOrder(usernameLine, passwordLine);
        QWidget::setTabOrder(passwordLine, debugCheckBox);
        QWidget::setTabOrder(debugCheckBox, list);

        retranslateUi(MiningPage);

        typeBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MiningPage);
    } // setupUi

    void retranslateUi(QWidget *MiningPage)
    {
        MiningPage->setWindowTitle(QApplication::translate("MiningPage", "Mining", 0, QApplication::UnicodeUTF8));
        passwordLabel->setText(QApplication::translate("MiningPage", "Worker Password", 0, QApplication::UnicodeUTF8));
        serverLabel->setText(QApplication::translate("MiningPage", "Server Address", 0, QApplication::UnicodeUTF8));
        usernameLine->setText(QString());
        usernameLabel->setText(QApplication::translate("MiningPage", "Worker.Name", 0, QApplication::UnicodeUTF8));
        portLabel->setText(QApplication::translate("MiningPage", "Port", 0, QApplication::UnicodeUTF8));
        startButton->setText(QApplication::translate("MiningPage", "Start Mining", 0, QApplication::UnicodeUTF8));
        shareCount->setText(QString());
        scantimeLabel->setText(QApplication::translate("MiningPage", "Scantime", 0, QApplication::UnicodeUTF8));
        debugCheckBox->setText(QApplication::translate("MiningPage", "Debug Logging", 0, QApplication::UnicodeUTF8));
        typeLabel->setText(QApplication::translate("MiningPage", "Type", 0, QApplication::UnicodeUTF8));
        typeBox->clear();
        typeBox->insertItems(0, QStringList()
         << QApplication::translate("MiningPage", "Solo Mining", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MiningPage", "Pool Mining", 0, QApplication::UnicodeUTF8)
        );
        portLine->setText(QApplication::translate("MiningPage", "9332", 0, QApplication::UnicodeUTF8));
        mineSpeedLabel->setText(QString());
        threadsLabel->setText(QApplication::translate("MiningPage", "CPU Threads", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MiningPage: public Ui_MiningPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MININGPAGE_H
