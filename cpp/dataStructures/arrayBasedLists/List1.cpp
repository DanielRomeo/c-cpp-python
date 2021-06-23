#include <iostream>
#include "List1.h"

// List1::List1(){

// }

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
};

