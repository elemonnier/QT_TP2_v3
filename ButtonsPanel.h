//
// Created by upupu on 27/02/2020.
//

#ifndef QT_TP2_BUTTONSPANEL_H
#define QT_TP2_BUTTONSPANEL_H


#include <QtWidgets/QWidget>
#include <QtWidgets/QPushButton>

class ButtonsPanel : public QWidget {
private:
    QPushButton* configureButton;
    QPushButton* connectButton;
    QPushButton* disconnectButton;
public:
    ButtonsPanel();
};


#endif //QT_TP2_BUTTONSPANEL_H