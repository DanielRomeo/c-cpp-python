#ifndef LINKEDLIST_H
#define LINKEDLIST_H


// struct Node{
// 	int data;
// 	Node *link = NULL;
// };

template<class Type>
class Linkedlist
{
public:
	Linkedlist(Node* node);
	// ~Linkedlist();

	// void addToList(Node* HeadNode, Node* newNode);
	// void addNodeToNthPos(Node* HeadNode, Node* Node);
	// void deleteNode(Node* HeadNode, Node* delNode);
	// void addToBeginning(Node* HeadNode);
	// void reverse(Node* HeadNode);
	void print();
	Type max();

private:
	
	
};


#endif 