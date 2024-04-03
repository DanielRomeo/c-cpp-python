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
	std::vector<std::string> strVec = {"o", "o","o", "o","o", "o","o", "o"};
	for(auto i = 0; i < 8; ++i){
		myvec.push_back(strVec);
	}
	return myvec;
}

std::vector<std::vector<std::string>> addPieceAtPos(std::vector<std::vector<std::string>> &board, int row, int col){
    board[row][col] = "K";
    return board;
}

/* Write a function that finds the K value(knight) and then marks all possible jumps with a X*/
void printPossibleJumps(std::vector<std::vector<std::string>> &board){
    std::string value = "K";
    
    for(auto i = 0; i < board.size(); ++i){
        for(auto j =0; j < board[i].size(); ++j){
            if(board[i][j] == value){
                //
                // std::cout << "found one"<< std::endl;

                // board[i][j+10] = "T";

            }
        }
    }

    printBoard(board);

}



int main(){
	std::vector<std::vector<std::string>> board = createBoard();
    printBoard(board);
    addPieceAtPos(board, 5,5);
    addPieceAtPos(board, 4,2);
    printBoard(board);

    printPossibleJumps(board);

	return 0;
}
