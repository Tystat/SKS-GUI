#include "SKS_GUI_Refactor.h"
#include <QtWidgets/QApplication>


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	SKS_GUI_Refactor w;
	w.show();
	w.setFixedSize(w.size()); //D�sactive le redimensionnement
	return a.exec();
}
