#include <iostream>
#include <algorithm>
#include <string>

// swap function that swaps charectors in a string given the string and the positions
void swapper(std::string str,int pos1, int pos2){
	std::pair<std::string , std::string> mypair;
	mypair.first = str[pos1];
	mypair.second = str[pos2];
	str.replace(pos1, 1, mypair.second);
	str.replace(pos2, 1, mypair.first);
}

// Function to reverse the string without using the reverse function:
void reverse(std::string str){

	std::cout << "printed" << std::endl;
}

int main(){

	std::string str = "01234 678";
	// reverse(str);

	str.replace(str.begin(), str.end()-3, "EEEE");
	str.push_back('a');

	std::cout << str << std::endl;

	swapper("gangster", 0, 4);

	return 0;
}