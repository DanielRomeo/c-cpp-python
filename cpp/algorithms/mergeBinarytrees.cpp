#include <iostream>

struct Node{
    int data;
    Node* left ;
    Node* right;
};

Node* createNode(int value){
    Node* newNode = new Node();
    newNode->data = value;
    return newNode;
}

Node * insertNode(Node * root, int value){
    if(root == NULL){
        Node * newRoot = createNode(value);
        return newRoot;
    }
    if(value > root->data){
        return insertNode(root->right, value);
    }else if(value <= root->data){
        return insertNode(root->left, value);
    }
    return root;
}

// traverse a tree:
void traverseNode(Node * root){
    //
    if(root == NULL){
        
        std::cout << "Cannot traverse empty tree!" << std::endl;
        return;
    }
    std::cout << root->data << std::endl;
     traverseNode(root->left);
    traverseNode(root->right);
}

int main(){

    Node * myroot1;
    Node * myroot2;

    // insert into the first tree:
    insertNode(myroot1, 15);
    insertNode(myroot1, 10);
    insertNode(myroot1, 20);

    // insert into the second tree:
    insertNode(myroot2, 12);
    insertNode(myroot2, 6);
    insertNode(myroot2, 30);

    traverseNode(myroot1);

    return 0;
}