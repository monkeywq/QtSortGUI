#include "sortThread.h"

sortThread::sortThread(int num)
	: QThread(), threadStop(false), dataNumber(num)
{

}

sortThread::~sortThread()
{
	stop();
}
void sortThread::stop()
{
	threadStop = true;
}
void sortThread::BubbleSort()
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
			//	msleep(1);
				//	QMessageBox::about(NULL, "test", "OK");
			}
		}

	}
}
void sortThread::SelectionSort()
{
	int i, j, k, tmp;
	for (i = 0; i < mydata[dataNumber].length() - 1; i++) 
	{
		k = i;
		for (j = i + 1; j < mydata[dataNumber].length(); j++) 
		{
			if (mydata[dataNumber][j] < mydata[dataNumber][k]) 
			{
				k = j;
			}
		//	msleep(1);
		}
		tmp = mydata[dataNumber][k];
		mydata[dataNumber][k] = mydata[dataNumber][i];
		mydata[dataNumber][i] = tmp;
	//	
	}
}
void sortThread::ShellSort()
{
	for (int gap = mydata[dataNumber].size() >> 1; gap > 0; gap >>= 1)
	{
		for (int i = gap; i < mydata[dataNumber].size(); i++)
		{
			int temp = mydata[dataNumber][i];

			int j = i - gap;
			for (; j >= 0 && mydata[dataNumber][j] > temp; j -= gap)
			{
				mydata[dataNumber][j + gap] = mydata[dataNumber][j];
			}

			mydata[dataNumber][j + gap] = temp;
		}
	}
}
void sortThread::InsertSort()
{
	for (int i = 1; i < mydata[dataNumber].size(); i++) 
	{ // position
		for (int j = i; j > 0; j--) 
		{
			if (mydata[dataNumber][j] < mydata[dataNumber][j - 1])
			{
				int temp = mydata[dataNumber][j];
				mydata[dataNumber][j] = mydata[dataNumber][j - 1];
				mydata[dataNumber][j - 1] = temp;
			}
		}
	}
}
void sortThread::run()
{
	//mymutex.lock();
	if (threadStop == false)
	{
		switch (dataNumber)
		{
		case (0) :
			BubbleSort();
			stop();
			break;
		case(1) :
			SelectionSort();
			stop();
			break;
		case(2) :
			ShellSort();
			stop();
			break;
		case(3) :
			InsertSort();
			stop();
			break;
		default:
			break;
		}
	}
	
	//mymutex.unlock();
}

