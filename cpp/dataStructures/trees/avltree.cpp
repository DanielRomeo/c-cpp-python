#include <iostream>

struct Node {
	int data = NULL;
	Node * left= NULL;
	Node * right= NULL;
};

Node * createNode(int item){
	Node * newNode = new Node();
	newNode->data = item;
	return newNode;
}

int main(){


	return 0;
}