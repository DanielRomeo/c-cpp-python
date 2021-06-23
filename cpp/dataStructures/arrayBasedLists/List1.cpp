#include <iostream>
#include <assert.h>
#include "List1.h"

template <class Type>
List1<Type>::List1(int size){
	if(size < 0){
		std::cerr << "The list size must be positive, Creating a list size of 100!" << std::endl;
		maxSize = 100;
	}else{
		maxSize = size;
	}
	length = 0;
	list = new Type[maxSize];
	assert(list != NULL);
	
};

template <class Type>
bool List1<Type>::isEmpty()const{
	return (length == 0);
}

template <class Type>
bool List1<Type>::isFull()const{
	return (length == maxSize);
}

template <class Type>
int List1<Type>::listSize() const{
	return length;
}

template <class Type>
int List1<Type>::maxList1Size()const{
	return maxSize;
}

template <class Type>
void List1<Type>::print()const{
	for(int i = 0; i < length; i++){
		std::cout << list[i] << " ";
	}
	std::cout << std::endl;
}

template <class Type>
bool List1<Type>::isItemAtEqual(int location, const Type& item)const{
	return (list[location] == item);
}

template <class Type>
void List1<Type>::insertAt(int location, const Type& item){
	// start with error handling
	if(location < 0 || location >= maxSize){
		std::cerr << "The position of the item to be inserted is out of range." << std::endl;
	}else{
		if(length >= maxSize){
			std::cerr << "List1 is full!" << std::endl;
		}else{
			// write algo that loops backwards and adds the item at the desired location
		}
	}
}

template <class Type>
void List1<Type>::insertEnd(const Type& item){
	if(length >= maxSize){
		std::cerr << "The list is full!" << std::endl;
	}else{
		list[length] = item;
		length++;
	}
}


