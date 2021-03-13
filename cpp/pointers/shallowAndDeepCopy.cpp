/*
	This is an academic file that demonstrates shallow and deep copy pointers
	
	Shalow copy is when one or more pointer variables point to the same mem-address.
	Deep copy is when youi declare and new array to 'second variable' and loop copy elements from address 'first' to 'second'

	The case of shallow copy thin: is e.g when i have a:
	int * first; -> [2,3,4,5]
	int * second;
	second = first;
	delete [] second; -> THis deletes both first and second values in which they are pointing
	Thus making them dangling pointers and if program access them; causes error or incorrect address accessed 
*/
#include <iostream>


void deepCopy(){
	int *first = new int[10];
	int *second = new int[10];

	for (int i = 0; i < 10; ++i)
	{
		first[i] = i*i;	
	}
	// deep copy:
	for (int j = 0; j < 10; ++j)
	{
		second[j] = first[j];
	}

	//print
	std::cout << "Contents of first is: " << std::endl;
	for (int k = 0; k < 10; ++k)
	{
		std::cout << first[k] << std::endl;

	}
	
	std::cout << "Contents of second is: " << std::endl;
	for (int l = 0; l < 10; ++l)
	{
		std::cout << first[l] << std::endl;
		
	}

}


int main(){

	deepCopy();

	return 0;
}