// Queues.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "PriorityQueue.h"

int main()
{
    PriorityQueue priorityQueue(6);
    priorityQueue.Insert(3);
    priorityQueue.Insert(1);
    priorityQueue.Insert(6);
    priorityQueue.Insert(4);
    priorityQueue.Insert(2);
    priorityQueue.Insert(5);

    while (!priorityQueue.IsEmpty())
    {
        std::cout << priorityQueue.Remove() << std::endl;
    }
    std::cout << std::endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
