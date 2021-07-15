#include <iostream>
#include <algorithm>
#include <string>

#include <cctype>
#include <locale>

/*cannot figure out why the string increases in size ager i replace contents with the pair*/

// func found on internet that removes white spaces from left to right of string
static inline void ltrim(std::string &s) {
    s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](unsigned char ch) {
        return !std::isspace(ch);
    }));
}

// swap function that swaps charectors in a string given the string and the positions
std::string swapper(std::string str,int pos1, int pos2){
	std::pair<std::string , std::string> mypair;
	mypair.first = str[pos1];
	mypair.second = str[pos2];
	str.replace(pos1, 1, mypair.second);
	str.replace(pos2, 1, mypair.first);
	std::cout<< "length: " << str.length() << std::endl;
	return str;
}

// Function to reverse the string without using the reverse function:
void reverse(std::string str){
	int lenghtOfString = str.length();
	bool isLengthEven = false;
	std::string iterator; 

	for(int i = 0; i < str.length()/2; i++){ /*no need for modulus since; div 2 will return a whole number*/
		str = swapper(str, i , str.length()-i-1 );
	}
	std::cout << "result: " << str << std::endl;
}

int main(){

	std::string str = "01234 678";
	// reverse(str);

	// str.replace(str.begin(), str.end()-3, "EEEE");
	// str.push_back('a');

	// std::cout << str << std::endl;
	reverse("danielq");



	// std::cout << str.length() << std::endl;
	// str.replace(0,1, "aa");
	// std::cout << str.length() << std::endl;
	return 0;
}