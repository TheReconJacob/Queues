#pragma once
class PriorityQueue
{
private:
	int count;
	int* data;
	int size;

public:
	PriorityQueue();
	void Insert(int item);
	bool IsEmpty();
	bool IsFull();
	int PeakMin();
	PriorityQueue(int size);
	int Remove();
	int Size();
};

