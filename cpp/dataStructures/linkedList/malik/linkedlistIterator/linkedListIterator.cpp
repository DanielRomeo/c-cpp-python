#include "linkedListIterator.h"

template<class Type>
linkedListIterator<Type>::linkedListIterator(){
    current = NULL;
}

template<class Type>
linkedListIterator<Type>::linkedListIterator(nodeType<Type> *ptr){
    current = ptr;
}

template<class Type>
Type linkedListIterator<Type>::operator * (){
    return current->info;
}
 
template<class Type>
linkedListIterator<Type> linkedListIterator<Type>::operator++(){
    current = current->link;
    return *this;
}

template<class Type>
bool linkedListIterator<Type>::operator ==(const linkedListIterator<Type>& right) const{
    return (current == right.current);
} 

template<class Type>
bool linkedListIterator<Type>::operator !=(const linkedListIterator<Type> & right) const{
    return (current != right.current);
}