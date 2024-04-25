#include <iostream>
#include <algorithm>
#include <string>
#include <queue>

struct Node
{
	int data;
	Node* left;
	Node* right ;
};

// function to find the height of a tree:
int maxheight(Node * root){
	if(root == NULL){
		return 0;
	}
	int leftNode = maxheight(root->left);
	int rightNode = maxheight(root->right);
	return std::max(leftNode, rightNode) + 1;
}

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

void postOrderTraversal(Node *root){
	if(root == NULL){
		return;	
	} 
	preOrderPrint(root->left);
	preOrderPrint(root->right);	
	std::cout << root->data << std::endl;
}

void levelOrderTraversal(Node * root){
	if(root == NULL){
		return;	
	}

	std::queue<Node*> q;
	q.push(root);

	while(!q.empty()){
		Node * current = q.front();
		std::cout << current->data << std::endl;
		if(current->left != NULL){
			q.push(current->left);
		}
		if(current->right != NULL){
			q.push(current->right);
		}
		q.pop();
	}
}


// create node pointer
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

	levelOrderTraversal(myRoot);

	std::cout << "The height of the tree is : " << maxheight(myRoot) << std::endl;

	return 0;
}