//
// Created by upupu on 29/02/2020.
//

#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <iostream>
#include "ConfigurationDialog.h"
#include "LabeledTextField.h"

ConfigurationDialog::ConfigurationDialog(QDialog* parent) : QDialog(parent) {
    auto mainLayout = new QVBoxLayout;
    this->setWindowTitle("Configuration");
    this->setMinimumSize(150, 100);
    this->setWindowTitle("Configuration");
    this->setMinimumSize(150, 100);
    std::cout << "test";

    this->tf1 = new LabeledTextField("IP address");
    this->tf1->setMaximumHeight(21);
    mainLayout->addWidget(this->tf1);
    this->tf2 = new LabeledTextField("User");
    this->tf2->setMaximumHeight(21);
    mainLayout->addWidget(this->tf2);
    this->tf3 = new LabeledTextField("Password");
    this->tf2->setMaximumHeight(21);
    mainLayout->addWidget(this->tf2);
    this->setLayout(mainLayout);
}
