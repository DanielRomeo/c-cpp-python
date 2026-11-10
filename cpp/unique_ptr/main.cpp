// Unique_ptr tutorial.
#include <iostream>
#include <memory> // header for unique_ptr
using namespace std;

class Player {
public:
	Player() {
		cout << "Player joined the game \n";
	}
	~Player() {
		cout << "Player joined the game \n";

	}
	void attack(){
		cout << "Player attacks \n";
	}

};


int main() {
		
	// Create a unique ptr to a player object:
	unique_ptr<Player> p1 = make_unique<Player>();
	// using unique_ptr normally:
	p1->attack();

	return 0;
}