#include <iostream>
#include <cmath>
 
/*
    For this example, I actually want to implement a binary search tree as a class,
    and then have the method isBST in the class
 */

/*
    The binary search tree implemantation does not take in a root. 
    A root will be inserted
*/

// BST class
template <typename T>
struct Node{
    T data;
    Node<T> * left;
    Node<T> * right;
    Node(T x): data(x), left(nullptr), right(nullptr){};
};

template <typename T>
class BST{
public:
    // constructor:
    BST(Node<T> * root){
        root = root;
    }
    // destructor:
    ~BST(){

    }

    // Insert public method:
    Node<T> * insert(const T &data){
        return handleInsert(root, data);
    }
private:
    Node<T> * root;
    Node<T> * handleInsert(Node<T>* current,  T data){
        if(current == nullptr){
            return new Node(data);
        }
        if(data < current->data){
            current->left = handleInsert(current->left ,data);
        }else{
            current->right = handleInsert(current->right, data);
        }
        return current;
    }
};

int main(){

    // creating a root node and intatiating the tree object:
    Node<double> * mynode = new Node(100.0);
    BST<double> B = BST(mynode);

    // creating other nodes:
    // Node<double> * mynode2 = new Node(80.0);
    // Node<double> * mynode3 = new Node(300.4);

    // inserting the nodes into the tree:
    B.insert(80.0);
    B.insert(100.49);


    return 0;
}