#include <iostream>
#include "LinkedList.h"

template<class Type>
Linkedlist<Type>::Linkedlist(){
	first = NULL;
	last = NULL;
	count = 0;
}


template<class Type>
Type Linkedlist<Type>:: max(){

};

template<class Type>
void Linkedlist<Type>::print() const{
	Node<Type> * current; // pointer to traverse the list
	current = first;
	while(current != NULL){
		std::cout << current->info << " "<< std::endl;
		current = current->link;
	}
} // end print





// template <class Type>
// Type linkedListType<Type>::front() const
// {
// 	assert(first != NULL);
// 	return first->info; //return the info of the first node
// }//end front


// void addToList(Node* Head, Node* Item){
// 	Node* tempAddress = Head;
// 	while(tempAddress->link != NULL){
// 		tempAddress = tempAddress->link;
// 	}
// 	tempAddress->link = Item;
// }


// void Linkedlist::addNodeToNthPos(Node* HeadNode, Node* Node){

// };

// void Linkedlist::deleteNode(Node* HeadNode, Node* delNode){

// };

// void Linkedlist::addToBeginning(Node* HeadNode){

// };

// void Linkedlist::reverse(Node* HeadNode){

// };
// void Linkedlist::printList(Node* HeadNode){
// 	// Node* currentNode = HeadNode;
	
// }

