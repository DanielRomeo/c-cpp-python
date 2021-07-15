#include <iostream>
#include <cmath>
#include <cstdlib>
#include <vector>
// using namespace std;

// create a basic recursive function:
void ret(int n){
	if( n != 0){
		std::cout << "yebo, n is: " << n << std::endl;
		ret(n-1);
	}
}

int func(int value){
    std::cout << "number is " << value << std::endl;
    
    value--;
    return (value==0) ? 0: func(value);
    
}

int main(){

    // func(5);
    ret(5);
    return 0;
}