#include <iostream>

struct Node{
    int data;
    Node* left ;
    Node* right;
    Node(int data): data(data), left(nullptr), right(nullptr){}; // declaration initializer
};

Node* createNode(int value){
    Node* newNode = new Node(value);
    // newNode->data = value;
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
    if(root == NULL){
        return;
    }
    std::cout << root->data << std::endl;
    traverseNode(root->left);
    traverseNode(root->right);
}

// merge and print tree:
Node * mergeTree(Node * tree1, Node * tree2){
    // std::cout << "the merge runs " << std::endl;

    if(tree1 == NULL){
        // std::cout << "tree 1 is now NULL" << std::endl;
        return tree2;
    }
    if(tree2 == NULL){
        // std::cout << "tree 2 is now NULL" << std::endl;
        return tree1;
    }

    int values = tree1->data + tree2->data;
    Node * tree3 = new Node(values);

    std::cout << "Tree 3 value is : " << tree3->data << " ..." << std::endl;

    tree3->left = mergeTree(tree1->left, tree2->left);
    tree3->right = mergeTree(tree1->right, tree2->right);

    return tree3;

}

int main(){
    Node * myroot1 = insertNode(myroot1, 15);
    Node * myroot2 =  insertNode(myroot2, 20);

    // insert into the first tree:
    insertNode(myroot1, 10);
    insertNode(myroot1, 20);

    // insert into the second tree:
    insertNode(myroot2, 6);
    insertNode(myroot2, 30);

    traverseNode(myroot1);
    std::cout << std::endl; // leave empty line
    traverseNode(myroot2);

    // run merge and print:
    Node * newTree = mergeTree(myroot1, myroot2);  

    return 0;
}