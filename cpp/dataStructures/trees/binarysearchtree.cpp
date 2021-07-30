#include <iostream>
#include <algorithm>
#include <string>



struct Node
{
	// Node * parent;
	int data;
	Node* left;
	Node* right ;
};

void printTree(Node *root){
	std::cout << "" << std::endl;
}

void preOrderPrint(Node *root){
	if(root == NULL){
		return;	
	} 
	std::cout << root->data << std::endl;
	preOrderPrint(root->left);
	preOrderPrint(root->right);
}

//
Node * createNode(int value){
	Node * newNode = new Node();
	newNode->data = value;
	return newNode;
}

// takes the root node and the item we want to insert:
Node* insertNode(Node *root, int data){
	if(root == NULL){
		Node * root = createNode(data);
		return root;
	}else if(data <= root->data){
		root->left = insertNode(root->left, data);
	}else{
		root->right = insertNode(root->right, data);
	}
	return root;
}

int main(){
	// lets create an empty tree first and we will use the insert function to create the root node;
	Node * myRoot =	insertNode(myRoot, 1000);
	insertNode(myRoot, 22000);

	insertNode(myRoot, 100);
	insertNode(myRoot, 1200);
	insertNode(myRoot, 1800);
	// std::cout << (*myRoot).data << std::endl;

	preOrderPrint(myRoot);

	return 0;
}