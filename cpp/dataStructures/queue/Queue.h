#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <stdio.h>
#include <stddef.h>
#include <algorithm> 

class QClass{
public:
	QClass(int _qSize = 10);
	void Enqueue(int value);
	void Dequeue(int value);
	bool isEmpty();
	bool isFull();

private:
	int qSize = 10;
	int front, back = -1;
	int q[10];
};


#endif 