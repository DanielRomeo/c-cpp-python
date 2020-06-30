#include <iostream>
#include <cmath>
#include <cstdlib>
#include "math.h"
#include <vector>
#include <string>
// using namespace std;

// string reverser:
std::string reverse(std::string s){
	std::string answer = "";

	for(int i = 0; i < s.size(); i++){
		answer = s[i] + answer;
	}
	return answer;
}

bool isPalindrome(std::string word){
	return word == reverse(word);
}



int main(){
	int x,y;
	std::string word;
	std::string sub;
	bool val;

	std::cin >> word;

	// word.substr(4); // this starts at 5th char and gets errthing till the end:
	// word.substr(0, 4); // first 4 chars in the string
	// std::cout << word.substr(4) << std::endl;
	// std::cout << word << " " << word.substr(4);

	// std::cout << reverse(string);
	// print the word
	// for (int i = 0; i < word.size(); ++i)
	// {
	// 	std::cout << word[i] << std::endl;
	// }

	// print the word in reverse
	// for (int i = word.size()-1; i >=0; i--)
	// {
	// 	std::cout << word[i] << std::endl;
	// }

    return 0;
}
        

























   
