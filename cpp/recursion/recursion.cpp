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

#if 0 ///  was just trying to figure out the nature of the nested return statments that happen hypothetically
int yes0(){
	return 2;
}

int yes(){
	return yes0();
}

int ret(){
	return yes();
}
#endif

int main(){
	ret(4);

    return 0;
}