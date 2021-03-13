/*
***********************
	The program demontsrates that when a destructor method is called, member variables that are pointers
	still need to be deleted otherwise we face memory leak.

	Object2 = Object1 would lead to shallow copying of pointers, to prevent this we overload the = operator
	
	There are other ways that could result in shallow copying of data,
	we van prevent all this if we just overwrite the default copy function
	provided by the constructor itself. 
************************
*/
#include <iostream>


class PointerDataClass
{
public:
	PointerDataClass();
	~PointerDataClass(){
		delete [] p;
	};

	operator = (const PointerDataClass & Object1){

	}
private:
	int x;
	int lenP;
	int *p;
};

int main(){


	return 0;
}