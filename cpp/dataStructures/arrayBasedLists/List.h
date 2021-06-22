#ifdef LIST.H
#define LIST.H

template <class Type>
class List{
public:
	const List<Type>& operator = (const List<Type>&); // overloading assinment
	bool isEmpty() const;
	bool isFull() const;
	int listSize() const;
	int maxListSize() const;
	void print() const;
	bool isItemAtEqual(int location, const Type& item) const;
	void insertAt(int location, const Type& item); // insert item at location position
	void insertEnd(int location, const Type& item); // insert at end of the list
	void removeAt(int location);
	void retrieveAt(int location, Type& retItem) const;
	void replaceAt(int location, Type& repItem);
	void clearList() const;
	int seqSearch(const Type& item) const; 
	List(int size = 100); // constructor
	List(const List<Type>& otherList); // copy constructor
	~List(); // destructor
protected:
	Type * list;
	int lenght;
	int maxSize;
}


#endif