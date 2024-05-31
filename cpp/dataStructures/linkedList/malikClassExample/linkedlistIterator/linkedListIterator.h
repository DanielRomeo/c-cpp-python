#ifndef LINKEDLISTITERATOR_H
#define LINKEDLISTITERATOR_H

template<typename Type>
struct nodeType{
    Type info;
    nodeType<Type> *link;
};

template <class Type>
class linkedListIterator{
public:
    linkedListIterator();
    linkedListIterator(nodeType<Type> *ptr);
    Type operator * (); // overload the * operator
    linkedListIterator<Type> operator++();
    bool operator ==(const linkedListIterator<Type>& right) const; // overload the equality operator 
    bool operator !=(const linkedListIterator<Type> & right) const; // overload the no equal to operator
private:
    nodeType<Type>* current; // pointer to point to current node in linkedlist
};


#endif