#include <QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QHeaderView>
#include "SQLClientWindow.h"
#include "LabeledTextField.h"
#include "ConfigurationDialog.h"

int main(int argc, char** argv){
    auto app = new QApplication (argc, argv);

//    auto parentWindow = new QWidget;
//    auto clientWindow = new SQLClientWindow();
//    clientWindow->show();

//    auto labeledTextField = new LabeledTextField;
//    labeledTextField->show();



/// PROCÉDURAL
//
//    auto w = new QWidget;
//    auto mainLayout = new QVBoxLayout;
//    w->setWindowTitle("SQL Client");
//    w->setMinimumSize(600, 400);
//
//
//    auto subW1 = new QWidget;
//    auto a = new QPushButton(subW1);
//    auto b = new QPushButton(subW1);
//    auto c = new QPushButton(subW1);
//    a->setText("Configure");
//    b->setText("Connect");
//    c->setText("Disconnect");
//    auto subLayout1 = new QHBoxLayout;
//    subLayout1->addWidget(a);
//    subLayout1->addWidget(b);
//    subLayout1->addWidget(c);
//    subW1->setLayout(subLayout1);
//
//    auto subW2 = new QTextEdit;
//
//    auto subW3 = new QTableWidget;
//    subW3->setRowCount(5);
//    subW3->setColumnCount(3);
//    subW3->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
//
//    mainLayout->addWidget(subW1);
//    mainLayout->addWidget(subW2);
//    mainLayout->addWidget(subW3);
//    w->setLayout(mainLayout);
//
//    w->show();

//    auto w = new QWidget;
//    auto mainLayout = new QVBoxLayout;
//    w->setWindowTitle("Configuration");
//    w->setMinimumSize(150, 100);
//
//    auto subW1 = new QWidget;
//    auto label1 = new QLabel;
//    label1->setText("IP address");
//    auto textEdit1 = new QTextEdit;
//    textEdit1->setMaximumHeight(21);
//    auto subLayout1 = new QHBoxLayout;
//    subLayout1->addWidget(label1);
//    subLayout1->addWidget(textEdit1);
//    subW1->setLayout(subLayout1);
//
//    auto subW2 = new QWidget;
//    auto label2 = new QLabel;
//    label2->setText("User");
//    auto textEdit2 = new QTextEdit;
//    textEdit2->setMaximumHeight(21);
//    auto subLayout2 = new QHBoxLayout;
//    subLayout2->addWidget(label2);
//    subLayout2->addWidget(textEdit2);
//    subW2->setLayout(subLayout2);
//
//    auto subW3 = new QWidget;
//    auto label3 = new QLabel;
//    label3->setText("Password");
//    auto textEdit3 = new QTextEdit;
//    textEdit3->setMaximumHeight(21);
//    auto subLayout3 = new QHBoxLayout;
//    subLayout3->addWidget(label3);
//    subLayout3->addWidget(textEdit3);
//    subW3->setLayout(subLayout3);

//    mainLayout->addWidget(subW1);
//    mainLayout->addWidget(subW2);
//    mainLayout->addWidget(subW3);
//    w->setLayout(mainLayout);
//    w->show();

    auto parent = new QDialog();

    auto cfd = new ConfigurationDialog(parent);
    parent->show();

    return app->exec();
}