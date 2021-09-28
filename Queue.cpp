#include <iostream>
#include "Queue.h"
using namespace std;

Queue::Queue()
{
	size = 0;
	head = nullptr;
	tail = nullptr;
}

Queue::~Queue()
{
	//deconstructor
}

bool const Queue::isEmpty()
{
	return(size == 0);
}

void Queue::enqueue(int input)
{
	Node* newNode = new Node;
	newNode->numData = input;
	newNode->next = nullptr;

	if (head == nullptr)
	{
		head = newNode;
		tail = newNode;
	}
	else
	{
		tail->next = newNode;
		tail = newNode;
	}
	size++;
}

void Queue::dequeue()
{
	if (head == nullptr)
	{
		return;
	}
	else if (size == 1)
	{
		delete head;
		head = nullptr;
		size--;
		return;
	}
	else
	{
		Node* temp = head->next;
		delete head;
		head = temp;
		size--;
		return;
	}
}

int const Queue::peak()
{
	if (head == nullptr)
	{
		return -1;
	}
	return head->numData;
}

void const Queue::seeAll()
{
	if (head == nullptr)
	{
		return;
	}
	Node* temp = head;
	while (temp != nullptr)
	{
		cout << temp->numData << endl;
		temp = temp->next;
	}
}