#include <iostream>
#include <string>



int main(){
	
	int* ptr, ptr2  ;
	int* ptr3;
	int ** p;
	int number = 300;
	ptr = &number;
	ptr3 = &number;

	p = &ptr3; // this is a pointer to pointer example

	std::cout << "p's value is: " << **p << std::endl;


	std::cout << *ptr << " ... and pointer3 is : " << *ptr3 <<std::endl;
		
	return 0;
}
