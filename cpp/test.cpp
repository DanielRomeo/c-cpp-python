#include <iostream>
#include <string>
#include <vector>


// print the matrice:
void print(std::vector<std::vector<std::string>> vec){
	for(auto a: vec){	
		for(auto b: a){
			std::cout << b;
		}
		std::cout << '\n';
		
	}
}

// create a 2d matrice with vectors:
std::vector<std::vector<std::string>> createBoard(){
	// std::vector<std::string> innerVec;
	std::vector<std::vector<std::string>> myvec;

	std::vector<std::string> strVec = {"x", "x","x", "x","x", "x","x", "x"};

	for(auto i = 0; i < 8; ++i){
		myvec.push_back(strVec);
	}

	print(myvec);

	return myvec;
}

// void populateBoard(std::vector<std::vector<std::string>> &board){
// 	// std::vector<std::vector<string>>::iterator it;

// 	// for(it = board.begin(); it< board.end(); ++it){

// 	// }
// }



int main(){
	createBoard();
	return 0;
}
