#pragma once
class Queue
{
private:
	int count;
	int* data;
	int front;
	int rear;
	int size;

public:
	Queue();
	void Insert(int item);
	bool IsEmpty();
	bool IsFull();
	int PeakFront();
	Queue(int size);
	int Remove();
	int Size();
};

