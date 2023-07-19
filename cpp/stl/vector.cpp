#include <iostream>
#include <cmath>
#include <array>
#include <string>
#include <vector>
#include <iterator>

/*
    vectors:
    What i realised is that its capacity will double whenever we insert elements to a point where it reaches max capacity.
    If i instanitate the vector with elements inside, the capacity is = to the number of elements...
    resize() method will make sure that the size of the vector equals the number you produced...{ if u had 2 elements and u resize(5), 
    then index 3,4,5 will new equal 0,0,0} and thus u have 5 elments...

    The reserve() method will allocate memory, but it wont actually add elements to those memory addresses. They remain empty; ready to be utalised...
*/

int main(){

    /**/
    std::vector<int> vec;
    std::vector<int>::iterator it;
    // vec.reserve(32);
    for(auto i = 0; i < 24; i++){
        vec.push_back(i);
        //std::cout<< "VALUE : " << vec[i] <<" ,CAPACITY : " << vec.capacity() << " , SIZE : " << vec.size() <<  std::endl;
    }

    // second vector to test the size:
    std::vector<int> vec2 = {1,14, 15, 100, 111};
    vec2.resize(10);

    std::vector<int>::iterator it2;
    vec2.push_back(100);
    vec2.push_back(100);
    vec2.push_back(100);
    vec2.push_back(100);
    vec2.push_back(100);
    vec2.push_back(100);

    for(auto i = vec2.begin(); i < vec2.end(); i++){ 
        std::cout << *i << std::endl; 
    } 

    std::cout << vec2.capacity() << std::endl;

        
    return 0;
}