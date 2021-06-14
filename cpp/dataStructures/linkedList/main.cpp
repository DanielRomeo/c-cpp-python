#include <iostream>
#include "LinkedList.h"

Node * HeadNode;

int main(){

	HeadNode = NULL;

	LinkedList<int> mylist;
	
	// create a node and make it a head node:
	Node fistnode(100);
	HeadNode = firstnode;


	mylist.addToList(HeadNode, firstnode); // add the firstnode to the list

	std::cout<< "hello world" << std::endl;
	return 0;
}