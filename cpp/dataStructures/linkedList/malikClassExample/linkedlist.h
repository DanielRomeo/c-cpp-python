#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "linkedListIterator.h"

template<typename Type>
struct nodeType{
    Type info;
    nodeType<Type> *link;
};

template <class Type>
class linkedList{
public:
    const linkedList<Type> & operator =(const linkedList<Type>);
    void initializeList(); // initialize list to empty state
    bool isEmptyList() const;
    void print() const;
    int length() const;
    void destroyList();
    Type front() const; // returns first elem in list
    Type back() const;
    virtual bool search(const Type & searchItem) const = 0;
    virtual void insertFirst(const Type& newItem) = 0;
    virtual void insertLast(const Type& deleteItem) = 0;
    linkedListIterator<Type> begin(); // returns iterator at beginning of linked list
    linkedListIterator<Type> end();
    linkedList(); // constructor
    linkedList(const linkedList<Type>& otherList); // copy constructor
    ~linkedList(); // destructor
protected:
    int count;
    nodeType<Type> *first; // pointer to the first node of the list
    nodeType<Type> *last;
private:
    void copyList(const linkedLIst<Type>& otherList); // copy one list to another 
};

#endif