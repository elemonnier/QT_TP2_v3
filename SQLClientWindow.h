//
// Created by upupu on 27/02/2020.
//

#ifndef QT_TP2_SQLCLIENTWINDOW_H
#define QT_TP2_SQLCLIENTWINDOW_H


#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTableWidget>
#include "ButtonsPanel.h"


class SQLClientWindow : public QWidget {
private:
    ButtonsPanel* buttonsPanel;
    QTextEdit* notificationPanel;
    QTableWidget* resultTable;
public:
    SQLClientWindow();
};


#endif //QT_TP2_SQLCLIENTWINDOW_H
