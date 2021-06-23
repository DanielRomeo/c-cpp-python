#ifndef LIST1_H
#define LIST1_H

template <class Type>
class List1{
public:
	//const List1<Type>& operator = (const List1<Type>&); // overloading assinment
	bool isEmpty() const;
	bool isFull() const;
	int listSize() const;
	int maxList1Size() const;
	void print() const;
	bool isItemAtEqual(int location, const Type& item) const;
	void insertAt(int location, const Type& item); // insert item at location position
	void insertEnd(const Type& item); // insert at end of the list
	void removeAt(int location);
	void retrieveAt(int location, Type& retItem) const;
	void replaceAt(int location, Type& repItem);
	void clearList() const;
	int seqSearch(const Type& item) const; 
	List1(int size); // constructor
	//List1(const List1<Type>& otherList); // copy constructor
	// ~List1(); // destructor
protected:
	Type * list;
	int length;
	int maxSize;
};


#endif