#include "linkedlist.h"

// member function to check if list is empty or not:
template<class Type>
bool linkedList<Type>::isEmptyList() const{
    return (first == NULL);
}

// constructor:
template<class Type>
linkedList<Type>::linkedList(){
    first = NULL;
    last = NULL;
    count = 0;
}

// destructor:
template<class Type>
void linkedList<Type>::destroyList(){
    // create a temporary pointer that points to the first node, we advance the node and delete, till we reach the end:
    nodeType<Type> * temp;
    while(first != null){
        temp = first;
        first = first->link;
        delete temp;
    }
    last = NULL;
    count = 0;
}

// deletes any nodes in the linked list by calling destroyList()
// this method is used by other methods when creating the linked list:
template<class Type>
void linkedList<Type>::initializeList(){
    destroyList();
}

// traverse the list:
template<class Type>
void linkedList<Type>::print() const{
    nodeType<Type> *current;
    current = first; // sent the current to the first node
    while(current != NULL){
        std::cout << current->info << " ";
        current << current->link;
    }
}

// return the length of the list:
template<class Type>
int linkedList<Type>::length() const{
    
}

