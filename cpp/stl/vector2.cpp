#include <iostream>
#include <vector>

/*
    Methods:
    vec.reserve() - regarding capacity, it just increases the capacity, only if you pass in a value that is greater than the current capacity. if lower, nothing will happen.
    vec.capacity() - checks how many items can fit in the vector.
    
    vec.resize() - will resize the vector to whaterver size you insert. so vector will now have as many elements as have the value to be.
    vec.size() - gives number of how many elements are inside the vector.
*/


int main(){

    std::vector<int> vec;
    std::cout << "The allocated capacity of the vector is: " << vec.capacity() << std::endl;
    std::cout << "The size of the vector is : " << vec.size() << std::endl;
    vec.resize(4);
    std::cout << "The allocated capacity of the vector is: " << vec.capacity() << std::endl;
    std::cout << "The size of the vector is : " << vec.size() << std::endl;
    std::cout << "The max size of the vector, after resizing is : " << vec.max_size() << std::endl;

    // let me add more elements to the vector, and check the capacity. it should jump to 16.
    vec.push_back(200);
    std::cout << "The allocated capacity of the vector is: " << vec.capacity() << std::endl;


    return 0;
}