// **********************************************
/*
	This program does...
*/
//******************************************
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>

// function to declare a dynamic variable and returns a pointer
int* declare(){
	// declaring and accessing named pointers
	int *p;
	int x =100;
	p = &x;

	// declaring and accessing unnamed pointers
	char *q;
	q = new char[16];

	// deleting the pointers
	delete q;

	/* declaring and redeclearing dynamic pointers
		
		In the example below, I created a memory leak accidentally
		because I redeclared a pointer variable without deleting it
		This causes a memory leak because memory that cannot be accesible is now
		just sitting there.
		
		Its not enought to just delete, I also need to setthe value to null because
		the pointer variable can still now be set to the previous memory address
		and that could raise problems in the future e.g if i try to reues the variable by setting
		something else- but i dont set something else and i just call the variable ~ could lead to errors or 
		unexpected results
		Therefore i need to set the value to NULL

	*/
	int *s;
	s = new int;
	*s = 300;
	s = new int;
	*s = 750;

	/*The correct way of doing things*/
	int *f;
	f = new int;
	*f = 400;
	delete f;
	f = NULL;

	f = new int; // re declared	
	*f = 9000; // re initialised

	/*declaring and sharing memory addresses*/
	int *i;
	int *j;
	i = j; // now point to the same memory address 

	return f;
}

int main(){

	std::cout << *declare() << std::endl;

	return 0;
}