#include "tictactoe.h"

tictactoe::tictactoe(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(changeCaption()));
}

void tictactoe::changeCaption(){
	ui.label->setText("test");
	ui.checkBox->click();
}

tictactoe::~tictactoe()
{

}
