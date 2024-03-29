#include <iostream>
#include <vector>

void print_container(const std::vector<int>& c) 
{
    for (int i : c)
        std::cout << i << " ";
    std::cout << '\n';
}

/*
    Methods:
    vec.reserve() - regarding capacity, it just increases the capacity, only if you pass in a value that is greater than the current capacity. if lower, nothing will happen.
    vec.capacity() - checks how many items can fit in the vector.
    
    vec.resize() - will resize the vector to whatever size you insert. so vector will now have as many elements as have the value to be.
    and if we want to add onto the newly resized vector, we can pass second param to initialize the new elements with.

    vec.size() - gives number of how many elements are inside the vector.
    vec.insert(pos, value) - to add single value into vector, to add multiple same values in vector, or to insert another vector.
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

    // little task: Add the number 10 to the beginning of the vector... and print the first array and the altered array:
    std::vector<int> vec1; // declaration
    vec1 = {1,2,3,4}; // initialization
    vec1.insert(vec1.begin(), 100);
    for(auto i = vec1.begin(); i < vec1.end(); ++i){
        std::cout << "value of vec1 is : " << *i << std::endl;
    }

    // insert another vector inside my vector using the insert method:
    // vec.insert(const_iterator pos, InputIt first, InputIt last)
    std::vector<int> vecA = {1,2,3,4,5};
    std::vector<int> vecB = {10,20,30};
    vecA.insert(vecA.begin(), vecB.begin(), vecB.end());
    // print this vecA, to see if the elements in vecB were inserted at the beginning:
    for(auto j = vecA.begin(); j < vecA.end(); j++){
        // std::cout << *j << std::endl;
    }

    std::cout << "------------" << std::endl;

    // using the erase method:
    std::vector<int> shortVector = {1,2,3,4,5};
    std::vector<int>::iterator it = shortVector.begin(); // declaration of the vector iterator
    shortVector.erase(it+2, shortVector.end());


    // shortVector.erase(shortVector.begin());
    print_container(shortVector);





    return 0;
}