//
// Created by Hugo on 1/12/2023.
//

#ifndef QTPROJ_WINDOW_H
#define QTPROJ_WINDOW_H

#include <QWidget>

class QPushButton;
class Window : public QWidget{
	Q_OBJECT
public:
    explicit Window(QWidget *parent = 0);
private:
    QPushButton *m_button;


signals:
	public slots:

};

#endif //QTPROJ_WINDOW_H
