#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_SortGUI.h"
#include <QVector>
#include "sortThread.h"
extern QVector<QVector<float> > mydata;
extern QMutex mymutex;
class SortGUI : public QMainWindow
{
	Q_OBJECT

public:
	SortGUI(QWidget *parent = Q_NULLPTR);
	void drawBar(double x, int y, int width, int height, QPainter *painter);
	void drawBars(int mapNumber);  //形参为标号
	void sortMaoPao(int dataNumber);
	void MySleep(int msec);
	 ~SortGUI();
private slots:
	void slotSortPushButon();
	void paintEvent(QPaintEvent *);
	void timerEvent(QTimerEvent *event);

public:
	
private:
	Ui::SortGUIClass ui;
	QPixmap *pixMap[4];
	QPainter *pixPainter[4];
	QVector <int> data1;
	
	int timerID;
	sortThread *subThread1;
	sortThread *subThread2;
	sortThread *subThread3;
	sortThread *subThread4;
	int dataTest;
	QString bubbleFol = "Resources/Bubble/";
	QString selectionFol = "Resources/Selection/";
	
};
