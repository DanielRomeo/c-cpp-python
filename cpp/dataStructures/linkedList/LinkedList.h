#ifndef LINKEDLIST_H
#define LINKEDLIST_H


struct Node{
	int data;
	int *link;
};

class Linkedlist
{
public:
	Linkedlist(int number);
	~Linkedlist();

	void addNode(Node newNode);
	void addNodeToNthPos();
	void deleteNode();
	void addToBeginning();
	void reverse(Node* HeadNode);

private:
	int number = 0;
};


#endif 