#include "PriorityQueue.h"

PriorityQueue::PriorityQueue(int size)
{
    data = new int[size];
    count = 0;
}

void PriorityQueue::Insert(int item)
{
    if (IsEmpty())
    {
        data[0] = item;
        count++;
    }
    else
    {
        int i;
        for (i = count - 1; i >= 0; i--)
        {
            if (item > data[i])
                data[i + 1] = data[i];
            else
                break;
        }
        data[i + 1] = item;
        count++;
    }
}

bool PriorityQueue::IsEmpty()
{
    return count == 0;
}

bool PriorityQueue::IsFull()
{
    return count == size;
}

int PriorityQueue::PeakMin()
{
    return data[count - 1];
}

int PriorityQueue::Remove()
{
    count--;
    return data[count];
}

int PriorityQueue::Size()
{
    return count;
}