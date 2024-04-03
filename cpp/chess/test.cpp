#include <iostream>
#include <string>
#include <vector>


// print the chess board:
void printBoard(std::vector<std::vector<std::string>> &board){
	for(auto a: board){	
		for(auto b: a){
			std::cout << b;
		}
		std::cout << '\n';
	}
    std::cout << "\n";
}

// create a 2d matrice with vectors to create a chess board:
std::vector<std::vector<std::string>> createBoard(){
	std::vector<std::vector<std::string>> myvec;
	std::vector<std::string> strVec = {"x", "x","x", "x","x", "x","x", "x"};
	for(auto i = 0; i < 8; ++i){
		myvec.push_back(strVec);
	}
	return myvec;
}

std::vector<std::vector<std::string>> addPieceAtPos(std::vector<std::vector<std::string>> &board, int row, int col){
    board[row][col] = "S";
    return board;
}




int main(){
	std::vector<std::vector<std::string>> board = createBoard();
    printBoard(board);
    addPieceAtPos(board, 5,5);
    printBoard(board);

	return 0;
}
