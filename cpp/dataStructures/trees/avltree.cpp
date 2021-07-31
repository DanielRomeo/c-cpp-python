#include <iostream>

struct Node {
	int data;
	Node * left;
	Node * rigtt;
}

Node * createNode(int item){
	Node * newNode = new Node();
	newNode->data = item;
	return newNode();
}

int main(){


	return 0;
}