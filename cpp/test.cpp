#include <iostream>
#include <string>
// #include <stdio.h>
// #include <stdlib.h>

class Data{
public:
	Data(){

	}
	~Data(){
		delete p;
		p = NULL;
	}

	void get(){
		int *s = new int;
		*s = 1000; 
		std::cout << *s << std::endl;
	}
private:
	int x;
	int lenP;
	int *p;
};

int main(){
	
	std::string sam;
	int x = 1500;
	int *p = &x;
	sam = *p;
	char [10] chars;

	chars[i] = 'a';

	// int value = &p;
	std::cout<< sam <<  std::endl;


	Data romeo;
	romeo.get();

	return 0;
}
