#include <iostream>
#include <cstdlib>
/**/
/* we use these arrow functions to derefernect a pointer variable*/

struct Node
{
	int data;
	Node* link;
};

// function to add a item to end of linkedlist:
void addToList(Node* Head, Node* Item){
	Node* tempAddress = Head;
	while(tempAddress->link != NULL){
		tempAddress = tempAddress->link;
		std::cout << "still not null" << std::endl;
	}
	tempAddress->link = Item;
}

void printList(Node* Head){
	Node* tempAddress = Head;
	while(tempAddress->link != NULL){
		tempAddress = tempAddress->link;
		std::cout << tempAddress->data << std::endl;
	}
	// tempAddress->link = Item;
}

int main(){
	

	Node* A; // this is the head node
	A = NULL;
	Node * temp = new Node();
	Node * temp3 = new Node();
	Node * temp2 = new Node();
	Node * temp4 = new Node();
	

	temp->data = 2;
	temp->link = temp2;
	A = temp;

	temp2->data = 1600;
	temp2->link = temp3;

	std::cout << "---> "<<A <<" "<< A->link <<" "<<A->data << std::endl;

	temp3->data = 80000;
	temp3->link = temp4;
	
	temp4->data = 100;
	temp4->link = NULL;
	

	printList(A);

	
	return 0;
} 