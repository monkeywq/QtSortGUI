#pragma once

#include <QThread>
#include <QVector>
extern QVector<QVector<float> > mydata;
extern QMutex mymutex;
class sortThread : public QThread
{
	Q_OBJECT

public:
	sortThread(int num);
	~sortThread();
	void stop();
protected:
	void run();
	void BubbleSort();
	void SelectionSort();
	void ShellSort();
	void InsertSort();
private:
	bool threadStop;
	int dataNumber;
	//int &data;
};
