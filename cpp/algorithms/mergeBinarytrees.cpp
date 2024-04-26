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
    }else if(value > root->data){
        root->right = insertNode(root->right, value);
    }else if(value <= root->data){
        root->left = insertNode(root->left, value);
    }
    return root;
}

// traverse a tree:
void traverseNode(Node * root){
    //
    if(root == NULL){
        return;
    }
    
     traverseNode(root->left);
    traverseNode(root->right);
    std::cout << root->data << std::endl;
}

int main(){

    Node * myroot1 = insertNode(myroot1, 15);
    // Node * myroot2 =  insertNode(myroot2, 12);

    // insert into the first tree:
    insertNode(myroot1, 10);
    insertNode(myroot1, 20);

    // insert into the second tree:
    // insertNode(myroot2, 6);
    // insertNode(myroot2, 30);

    traverseNode(myroot1);

    return 0;
}