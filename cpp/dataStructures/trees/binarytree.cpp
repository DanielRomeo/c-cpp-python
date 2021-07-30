#include <iostream>
#include <algorithm>
#include <string>

struct Node
{
	int item;
	Node* left;
	Node* right ;
};

Node * createNode(int data){
	Node * newNode;
	newNode->item = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

Node * insertNode(Node * root, int data){
	if(root == NULL){
		return root = createNode(data);
	}

	if(data <= root->item){
		return root = insertNode(root->left, data);
	}else{
		return root = insertNode(root->right, data);
	}
}



int main(){

	// create a node:
	Node * mynode; 
	insertNode(mynode, 1000);


	return 0;
}