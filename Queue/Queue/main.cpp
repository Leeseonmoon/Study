
#include <iostream>

#include "MyQueue.h"

using namespace std;

void main()
{
	MyQueue<int>* Q = new MyQueue<int>();

	int a = 10;
	Q->enQueue(a);
	Q->enQueue(20);
	Q->enQueue(30);
	Q->enQueue(40);
	a = Q->deQueue();
	cout << a;
}