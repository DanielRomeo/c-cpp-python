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
    return count;
}

// returns information of the first node in the linked list:
template<class Type>
Type linkedList<Type>::front() const{
    assert(first != NULL);
    return first->info;
}
// returns information of the last node in the linked list:
template<class Type>
Type linkedList<Type>::back() const{
    assert(last != NULL);
    return last->info;
}

// begin and end:
// this method returns an iterator to the first element in the linked list:
