//
// Created by Hugo on 1/12/2023.
//

#include "window.h"
#include <QPushButton>
#include <QApplication>

Window::Window(QWidget *parent) :
    QWidget(parent) {
    setFixedSize(700, 500);

    m_button = new QPushButton("Hello World", this);
    m_button->setGeometry(10, 10, 80, 30);

    connect(m_button, SIGNAL (clicked()), QApplication::instance(), SLOT(quit()));
}