#include <iostream>
#include <algorithm>
#include <string>



struct Node
{
	Node * parent;
	int item;
	Node* left;
	Node* right ;
};

Node RootNode;

void printTree(Node *root){
	std::cout << "" << std::endl;
}

// function that inserts node into tree:
void insertNode(Node *root, Node item){
	/*when inserting we need to check if this is the root node or not...*/
	// item.parent = root;
	if(root->parent == NULL){ // 
		
	}
}

int main(){

	RootNode.parent = NULL;
	RootNode.item = 10;




	return 0;
}