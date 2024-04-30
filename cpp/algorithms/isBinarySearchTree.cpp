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
private:
    Node<T> * root;

    // Insert method:
    Node<T> * insert(T data){
        //
        return new Node(100);
    }
};

int main(){


    return 0;
}