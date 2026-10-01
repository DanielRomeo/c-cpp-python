#include <iostream>
using namespace std;


class Player{
public: 
static int playerCount;
    Player(){
        // add a player to the count;
        playerCount++;
    };
};

int Player::playerCount = 0;

int main(){

    Player p1;
    Player p2;
    Player p33;

    cout << Player::playerCount << "\n";

    return 0;
}