#pragma once

template <typename T>	class MyQueue
{
private:
	struct Node
	{
		T data;
		Node* next;
	};
	int size;

	Node* front;
	Node* rear;

public:
	MyQueue()
	{
		size = 0;
		front = NULL;
		rear = NULL;
	}
	virtual ~MyQueue()
	{
		while(!isEmpty())
		{
			deQueue();
		}
	}
	void enQueue(T _data)
	{
		Node* newNode=new Node();
		newNode->data = _data;
		newNode->next = NULL;
		if(front == NULL)
		{
			front = newNode;
			rear = newNode;
		}
		else
		{
			rear->next = newNode;
			rear = newNode;
		}
		size++;
	}
	T deQueue()
	{
		Node* temp = front;
		T data = temp->data;
		if(front->next==NULL)
		{
			rear = NULL;
			front = NULL;
		}
		else
			front = front->next;
		size--;
		delete temp;
		temp = NULL;
		return data;
	}
	bool isEmpty()
	{
		return (front==NULL);
	}
	int getSize()
	{
		return size;
	}
	T getFront()
	{
		return front->data;
	}
	T getRear()
	{
		return rear->data
	}
};