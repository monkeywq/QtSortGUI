#include "SortGUI.h"
#include <QtWidgets/QApplication>
QVector<QVector<float> > mydata(4, QVector<float>(5000));
QMutex mymutex;
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	SortGUI w;
	w.show();
	return a.exec();
}
