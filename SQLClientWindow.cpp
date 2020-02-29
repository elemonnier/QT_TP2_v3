//
// Created by upupu on 27/02/2020.
//

#include <QtWidgets/QVBoxLayout>
#include "SQLClientWindow.h"
#include "ButtonsPanel.h"
#include <QtWidgets/QHeaderView>

SQLClientWindow::SQLClientWindow() {
    this->setWindowTitle("SQL Client");
    this->setMinimumSize(600, 400);
    auto layout = new QVBoxLayout();
    this->buttonsPanel = new ButtonsPanel();
    layout->addWidget(this->buttonsPanel);
    this->notificationPanel = new QTextEdit;
    layout->addWidget(this->notificationPanel);
    this->resultTable = new QTableWidget;
    this->resultTable->setRowCount(5);
    this->resultTable->setColumnCount(3);
    this->resultTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    layout->addWidget(this->resultTable);
    this->setLayout(layout);
}