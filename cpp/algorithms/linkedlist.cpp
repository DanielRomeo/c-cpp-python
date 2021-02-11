#include <iostream>
#include <cstdlib>
/**/
/* we use these arrow functions to derefernect a pointer variable*/

struct Node
{
	int data;
	Node* link = NULL;
};

Node* HeadNode; // this is the head node

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

void addToBeginning(Node* Head, Node* Item){
	Item->link = Head;
	HeadNode = Item;
}

//function to add node ath Nth position:
void addToNthPos(Node * Head, Node* Item, int n){
	Node *p = Head;
	int i = 0;
	while(i != n){
		p = p->link; 
		i++;
	}
	Item->link = p->link;
	p->link = Item;
}

int main(){
	

	
	HeadNode = NULL;
	Node * temp = new Node();
	Node * temp3 = new Node();
	Node * temp2 = new Node();
	Node * temp4 = new Node();
	

	temp->data = 10;
	temp->link = NULL;
	HeadNode = temp;

	temp2->data = 20;
	temp2->link = NULL;

	temp3->data = 30;
	temp3->link = NULL;
	
	temp4->data = 40;
	temp4->link = NULL;
	
	addToList(HeadNode, temp2);
	addToList(HeadNode, temp3);
	addToList(HeadNode, temp4);

	//add node to beginning...
	Node* newHeadNode = new Node();
	newHeadNode->data = 0;
	newHeadNode->link = NULL;
	addToBeginning(HeadNode, newHeadNode);

	Node* newNodeB = new Node();
	newNodeB->data = 777;
	newNodeB->link = NULL;
	addToNthPos(HeadNode,newNodeB, 3);


	printList(HeadNode);

	
	return 0;
} 