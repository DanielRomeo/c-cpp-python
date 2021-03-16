#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include "math.h"
#include <vector>
// declarig an empty string:
std::string mystring = "\0";

// a string is an array of chars, this one has 9 letters and a \0 to mark the end:
char s[10] = "Hi mom!";


// function that shw u what exactly happens in a array of strings(chars).
// there is a mixture of empty chars and spaces...
void function(){
	char s[10] = "Hi mom!";

	for (int i = 0; i < 10; ++i)
	{
		if(s[i] ==' '){
			std::cout << "NULL" << std::endl;
		}else if(s[i] == '\0'){
			std::cout << "0" << std::endl;
		}
		else{
			std::cout << s[i] << std::endl;			
		}

	}
}

/* make sure you dont confuse these 2,the first one, a \0 will be added to the end of it, hence
	the length will be 6 no 5
*/
/*Note, always make sure u never change the value of the \0 in a string otherwise we will lose memory. */
char s1[] = "hello";
char s2[] = {'h', 'e', 'l', 'l', 'o'};


/*pitfalls*/
/*cannot give value to the char after declarations... but i can d this with inBuiltFunction strcpy*/
char s4[10] = "hi";
// s4[] = "hello"; // is illegal
strcpy(s4, "hello"); // legal although it doesnt make sure that the char  is not exceeding size of the var we are setting
strncpy(s4, "hello", 9); // legeal, now we know that it wont copy more than 9 values, leaving space for the \0

// == doesnt check if 2 strings are equal or not, otherwise, there is an alternate function you can use for that:
// using strcmp
char s4[] = "sammy";
char s5[] = "sammy";

bool check(){
	if(strcmp(s4, s5)){ // returns true if the comparisons do not mathch:
		return false;
	}	
	return true;
}



int main(){
		

	// std::cout << length(s); << std::endl;

	return 0;
}
