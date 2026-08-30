#include <iostream>
using namespace std;

class Player {
public:
	static int playerCounter;
	Player() {
		playerCounter++;
	}
};

// we must define and initialize static class members outside the class:
int Player::playerCounter = 0;


int main() {

	Player p1;
	Player p2;
	std::cout << Player::playerCounter << std::endl; // returns 2
	
	
	return 0;
}