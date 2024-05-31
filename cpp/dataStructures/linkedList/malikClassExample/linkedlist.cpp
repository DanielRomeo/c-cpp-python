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

