#ifndef TICTACTOE_H
#define TICTACTOE_H

#include <QtWidgets/QMainWindow>
#include "ui_tictactoe.h"

class tictactoe : public QMainWindow
{
	Q_OBJECT

public:
	tictactoe(QWidget *parent = 0);
	~tictactoe();
	
public slots:
	void changeCaption();

private:
	Ui::tictactoeClass ui;
};

#endif // TICTACTOE_H
