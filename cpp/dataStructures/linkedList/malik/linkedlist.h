#ifndef LINKEDLIST_H
#define LINKEDLIST_H

template<typename Type>
struct nodeType{
    Type info;
    nodeType<Type> *link;
};

#endif