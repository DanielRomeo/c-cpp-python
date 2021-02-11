#include <iostream>
#include <cstdlib>
/**/
/* we use these arrow functions to derefernect a pointer variable*/

struct Node
{
	int data;
	Node* link = NULL;
};

// function to add a item to end of linkedlist:
void addToList(Node* Head, Node* Item){
	Node* tempAddress = Head;
	while(tempAddress->link != NULL){
		tempAddress = tempAddress->link;
	}
	tempAddress->link = Item;
}

void printList(Node* Head){
	Node* tempAddress = Head;
	while(tempAddress->link != NULL){
		tempAddress = tempAddress->link;
		std::cout << tempAddress->data << std::endl;
	}
}

int main(){
	

	Node* A; // this is the head node
	A = NULL;
	Node * temp = new Node();
	Node * temp3 = new Node();
	Node * temp2 = new Node();
	Node * temp4 = new Node();
	

	temp->data = NULL;
	temp->link = NULL;
	A = temp;

	temp2->data = 1600;
	temp2->link = NULL;

	temp3->data = 80000;
	temp3->link = NULL;
	
	temp4->data = 100;
	temp4->link = NULL;
	
	addToList(A, temp2);
	addToList(A, temp3);
	addToList(A, temp4);

	printList(A);

	
	return 0;
} 