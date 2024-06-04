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
template<class Type> 
linkedListIterator<Type> linkedList<Type>::begin(){
    linkedListIterator<Type> temp(first);
    return temp;
}

// returns iterator pointing to the back of the linkedlist:
template<class Type> 
linkedListIterator<Type> linkedList<Type>::end(){
    linkedListIterator<Type> temp(NULL); // ???
    return temp;
}

// copy a linked list from another list into ours:
// NOTE: THIS linked list, is getting its info from other list:
// if there is something in our list, we are essentially deleting everything:
template<class Type>
void linkedList<Type>::copyList(const linkedList<Type> & otherList){
    // set the variables:
    nodeType<Type> *newNode;
    nodeType<Type> *currentNode;

    // if the our list is not empty, delete all elems:
    if(first != NULL){
        destroyList();
    }
    // if the other list is empty, then make ours empty as well:
    if(otherList.first == NULL){
        first = NULL;
        last = NULL;
        count = 0;
    }else{
        current = otherList.first;
        count = otherList.count;

    }
}