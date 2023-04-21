#include "Queue.h"

Queue::Queue(int size)
{
    data = new int[size];
    front = 0;
    rear = -1;
    count = 0;
}

void Queue::Insert(int item)
{
    if (rear == size - 1)
        rear = -1;
    rear++;
    data[rear] = item;
    count++;
}

bool Queue::IsEmpty()
{
    return count == 0;
}

bool Queue::IsFull()
{
    return count == size;
}

int Queue::PeakFront()
{
    return data[front];
}

int Queue::Remove()
{
    int item = data[front];
    front++;
    if (front == size)
        front = 0;
    count--;
    return item;
}

int Queue::Size()
{
    return count;
}