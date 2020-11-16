#include <iostream>
#include <cmath>
#include <cstdlib>
#include <vector>
// using namespace std;

int func(int value){
    std::cout << "number is " << value << std::endl;
    
    value--;
    return (value==0) ? 0: func(value);
    
}

int main(){

    func(5);
    return 0;
}