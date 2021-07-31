#include <iostream>
#include <algorithm>
#include <string>
#include <queue>

struct Node
{
	int item;
	Node* left;
	Node* right ;
};

Node * createNode(int data){
	Node * newNode = new Node();
	newNode->item = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

/* change this insert algorithm for it to use iteration and the queue ds insead of recursion */
/*Node * insertNode(Node * root, int data){
	if(root == NULL){
		Node * root = createNode(data);
		return root;
	}
	else if(data <= root->item){
		 root->left = insertNode(root->left, data);
	}else{
		 root->right = insertNode(root->right, data);
	}
	return root;
}*/
void insertNode(Node *root, int data){
	std::queue<Node*> q  ;
	q.push(root);

	Node* tempnode = new Node();

	// while(!q.empty()){
	// 	std::cout << "ran";		
	// 	tempnode = q.front(); 
		

	// 	if(tempnode->left == NULL){
	// 		std::cout << "ran----";
	// 		Node *newnode = new Node();
	// 		newnode->item = data;
	// 		tempnode->left = newnode;
	// 		return ;
	// 	}else if(tempnode->right == NULL){
	// 		Node * newnode = new Node();
	// 		newnode->item = data;
	// 		tempnode->right = newnode;
	// 		return ;
	// 	}
	// 	q.push(tempnode->left);
	// 	q.push(tempnode->right);
	// 	q.pop();
	// }



}

void inordertraversal(Node * root){
	if(root == NULL){
		return;	
	} 
	std::cout << root->item << std::endl;
	inordertraversal(root->left);
	inordertraversal(root->right);
}



int main(){

	// create a node:
	Node * myRoot;
	insertNode(myRoot, 12);
	/*Node * myRoot =	insertNode(myRoot, 1000);
	insertNode(myRoot, 22000);

	insertNode(myRoot, 100);
	insertNode(myRoot, 1200);
	insertNode(myRoot, 1800);

	inordertraversal(myRoot);
*/

	return 0;
}