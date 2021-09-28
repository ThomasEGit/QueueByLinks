#include <iostream>
#include "Queue.h"
using namespace std;

int main()
{
	Queue t;
	t.enqueue(5);
	cout << t.peak() <<endl;
	t.dequeue();
	cout << t.peak() << endl;
	cout << t.isEmpty() << endl;
	t.seeAll();
	t.enqueue(9);
	t.enqueue(2);
	t.seeAll();
	t.dequeue();
	t.seeAll();
}
