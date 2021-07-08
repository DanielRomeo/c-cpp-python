#include <iostream>
#include <string>
#include <algorithm>
// #include <pair>

/*Function that creates abbreviation given a word; This abbreviation is made like this: we write down the 
first and the last letter of a word and between them we write the number of letters between the first 
and the last letters. That number is in decimal system and doesn't contain any leading zeroes.*/
void abbreviation(std::string str){
	std::pair<std::string, std::string> p = {str.substr(0,1), str.substr(str.length(), 1)}; // first and last
	std::cout << p.first << std::endl;
}

// convert string to charector:
char convertStringToChar(std::string str){
	try{
		if(str.length()  == 1){
			char result = str[0];
			return result;
		}else{
			throw str.length();
		}
	}catch(unsigned long x){
		std::cerr << "Length of paramater cannot be : " << x << std::endl;
		return '\0';
	}
}

std::string convertCharToString(char charector){

	std::string result;
	result.push_back(charector);
	// std::string result(1, charector);
	// std::cout << result << std::endl;
	return result;
}

/*could convert char to string using :
- string:pushback
- declare new string ... std::string str = c(1, 'A')
*/

int main(){

	// std::cout << 1 << std::endl;
	std::string str = "Hello";
	// std::cout << str.find("world") << std::endl; 
	// std::cout << str.substr(str.length()-1,1) << std::endl; 

	// std::cout << str.length() << std::endl;

	// abbreviation("samson");

	// std::cout << convertCharToString('A') << std::endl;

	std::cout << convertStringToChar("ak") << std::endl;

	return 0;
}