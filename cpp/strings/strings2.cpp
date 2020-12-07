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
	std::string word2;
	std::string sentence;
	bool val;
	int position;
	int count = 0;


	// find and replace:
	// using find, size, insert, erase and insert:
	sentence = "an do an and dthe an ";
	word = "an";
	word2 = "IF";
	position = sentence.find(word);
	

	while(position != -1){
		sentence.erase(position, word.size() );
		sentence.insert(position, word2);
		position = sentence.find(word);
	}	

	std::cout << "The new sentence is : " << sentence << std::endl;


	// program that counts each occurances of a word:
	// while(position != -1){
	// 	count++;
	// 	position = sentence.find(word, position+1);
	// }


	// simple find the position of the occurance
	// std::cout << "enter sentence" << std::endl;
	// std::getline(std::cin, sentence, '\n');
	// std::cout << "enter word" ;
	// std::cin>> word;
	
	// position = sentence.find(word);
	// if(position != -1){
	// 	std::cout << word << " appears in position " <<position;
	// }

    return 0;

}
        

























   
