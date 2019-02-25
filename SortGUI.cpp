#include "SortGUI.h"
#include <QVector>
#include <QPainter>
#include <algorithm>
#include <QMessageBox>
#include <QThread>
#include <QTime>
#include <Windows.h>

using namespace std;

SortGUI::SortGUI(QWidget *parent)
	: QMainWindow(parent), data1(QVector<int>(100))/*,data(QVector<QVector<int> >(4,QVector<int>(100))) */
	,dataTest(0)//ʹ�ó�ʼ���б���г�ʼ��
{
	ui.setupUi(this);
	//��������4*100
	for (int i = 0; i < mydata.length(); i++)
	{
		for (int j = 0; j < mydata[0].length(); j++)
		{
			mydata[i][j] = j*0.02;
		}
	}
	random_shuffle(mydata[0].begin(), mydata[0].end());  //��������
	random_shuffle(mydata[1].begin(), mydata[1].end());
	random_shuffle(mydata[2].begin(), mydata[2].end());
	random_shuffle(mydata[3].begin(), mydata[3].end());

	pixMap[0] = new QPixmap(ui.win1->size());  //����ͼ��1
	pixMap[1] = new QPixmap(ui.win2->size());  //����ͼ��2
	pixMap[2] = new QPixmap(ui.win3->size());  //����ͼ��3
	pixMap[3] = new QPixmap(ui.win4->size());  //����ͼ��4

	pixPainter[0] = new QPainter(pixMap[0]);  //���廭��1
	pixPainter[1] = new QPainter(pixMap[1]); //���廭��2
	pixPainter[2] = new QPainter(pixMap[2]); //���廭��3
	pixPainter[3] = new QPainter(pixMap[3]); //���廭��4
	/*����ɫ*/
	pixMap[0]->fill(Qt::white); 
	pixMap[1]->fill(Qt::white);
	pixMap[2]->fill(Qt::white);
	pixMap[3]->fill(Qt::white);

	
	
	
	//�������������
	//sortMaoPao(0);
	//sort(data[0].begin(), data[0].end());
	mymutex.lock();
	drawBars(0);
	drawBars(1);
	drawBars(2);
	drawBars(3);
	ui.win1->setPixmap(*pixMap[0]);
	ui.win2->setPixmap(*pixMap[1]);
	ui.win3->setPixmap(*pixMap[2]);
	ui.win4->setPixmap(*pixMap[3]);
	mymutex.unlock();
	timerID = this->startTimer(10);
//	this->killTimer(timerID);
	setWindowFlags(windowFlags()&~Qt::WindowMaximizeButtonHint);    // ��ֹ��󻯰�ť
	setFixedSize(this->width(), this->height());  //��ֹ����

	// ���߳�
	subThread1 = new sortThread(0);
	subThread2 = new sortThread(1);
	subThread3 = new sortThread(2);
	subThread4 = new sortThread(3);
	

}
//�������Ͻ����꣬��ȡ��߶ȡ�����ָ��
void SortGUI::drawBar(double x, int y, int width,int height,QPainter *painter)
{
	QBrush brush(Qt::blue, Qt::SolidPattern);
	QPen pen(Qt::blue);
	//painter->setBrush(brush);
	painter->setPen(pen);
	painter->drawRect(x, y, width, height);
}
void SortGUI::drawBars(int mapNumber)
{
	pixMap[mapNumber]->fill(Qt::white);
	for (int i = 0; i < mydata[mapNumber].length(); i++)
	{
		drawBar(i * 0.05, 250 - mydata[mapNumber][i] * 2, 0.05, mydata[mapNumber][i] * 2, pixPainter[mapNumber]);
	}
}
void SortGUI::sortMaoPao(int dataNumber)
{
	for (int i = 0; i < mydata[dataNumber].length(); i++)
	{
		for (int j = i; j < mydata[dataNumber].length(); j++)
		{
			if (mydata[dataNumber][i] > mydata[dataNumber][j])
			{
				int k = mydata[dataNumber][i];
				mydata[dataNumber][i] = mydata[dataNumber][j];
				mydata[dataNumber][j] = k;
				MySleep(1);
			//	QMessageBox::about(NULL, "test", "OK");
				
			}
		}

	}
}
void SortGUI::slotSortPushButon()
{
	subThread1->start();
	subThread2->start();
	subThread3->start();
	subThread4->start();
}
void SortGUI::paintEvent(QPaintEvent *)
{
	drawBars(0);
	drawBars(1);
	drawBars(2);
	drawBars(3);
}
void SortGUI::MySleep(int msec)
{
	/*QTime dieTime = QTime::currentTime().addMSecs(msec);
	while (QTime::currentTime() < dieTime)
		QCoreApplication::processEvents(QEventLoop::AllEvents, 100);*/
	//Sleep(msec);
	QThread::msleep(msec);
	QCoreApplication::processEvents();
	
}
void SortGUI::timerEvent(QTimerEvent *event)
{
	static int imageNumber = 0;
	QString strNumber;
	imageNumber++;
	strNumber=QString::number(imageNumber, 10);
	QString str = bubbleFol + strNumber + ".png";
	pixMap[0]->save(str);
	ui.win1->setPixmap(*pixMap[0]);
	ui.win2->setPixmap(*pixMap[1]);
	ui.win3->setPixmap(*pixMap[2]);
	ui.win4->setPixmap(*pixMap[3]);
}
SortGUI::~SortGUI()
{
	delete subThread1;
	delete subThread2;
	delete subThread3;
	delete subThread4;
}