#include <iostream>
#include <cmath>
#include <array>
#include <string>
#include <vector>
#include <iterator>

int main(){

    /**/
    std::vector<int> vec;
    std::vector<int>::iterator it;
    vec.reserve(32);
    for(auto i = 0; i < 32; i++){
        vec.push_back(i);
        std::cout<< "VALUE : " << vec[i] <<" ,CAPACITY : " << vec.capacity() << " , SIZE : " << vec.size() <<  std::endl;
    }
        
    return 0;
}