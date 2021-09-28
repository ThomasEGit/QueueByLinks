#ifndef QUEUE_H 
#define QUEUE_H

struct Node
{
	int numData;
	Node* next;
};

class Queue
{
private:
	int size;
	Node* head;
	Node* tail;

public:
	Queue();
	~Queue();
	bool const isEmpty();
	void enqueue(int input);
	void dequeue();
	int const peak();
	void const seeAll();

};


#endif

