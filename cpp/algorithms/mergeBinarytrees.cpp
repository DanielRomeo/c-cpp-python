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
    std::cout << root->data << std::endl;
    traverseNode(root->left);
    traverseNode(root->right);
}

// merge and print tree:
void mergeAndPrintTree(Node * tree1, Node * tree2){
    if(tree1 != NULL  || tree2 != NULL ){
        Node * tree3 = insertNode(tree3, tree1->data + tree2->data);
    }


    // if(tree1->left != NULL ){
    //     int value1 = tree1->data
    // }
    // if(tree2->left != NULL ){
    //     int value2 = tree2->data
    // }    
}

int main(){

    Node * myroot1 = insertNode(myroot1, 15);
    Node * myroot2 =  insertNode(myroot2, 12);

    // insert into the first tree:
    insertNode(myroot1, 10);
    insertNode(myroot1, 20);

    // insert into the second tree:
    insertNode(myroot2, 6);
    insertNode(myroot2, 30);

    traverseNode(myroot1);
    std::cout << std::endl;
    traverseNode(myroot2);

    // run merge and print:

    return 0;
}