#include <iostream>
#include <cmath>
#include <cstdlib>
#include "math.h"
#include <vector>
// using namespace std;




struct Shirt {
	int size;
	char style;
	float price;
};

/**/

void displayDataconst(Shirt & shirt1){
	std::cout << "Shirt info" << std::endl;
	std::cout << "=============" << std::endl;
	
}

void silly(int & x){
	int y;
	y =x;
	x*=2;

	std::cout << x << " , " << y << std::endl;
}

int main(){
	int x,y;
	x = 8;
	y= 5;

	silly(x);
	std::cout << x << " , " << y << std::endl;
	silly(y);
	std::cout << x << " , " << y << std::endl;	
	

    return 0;
}
        

























   
