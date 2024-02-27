#include <iostream>
#include <vector>

/* Vector is an array like container. 

std::vector operations to test:
- standard traversal
- traversal with iterators
- test vector size and capacity

std::vector methods to test:
- push_back()
- pop_back()
- insert()
- capacity()
- size()
- shrink_to_fit()

*/ 

// function to traverse through a vector:
void traverseVector( std::vector<int> const &myVector){
    for(auto a: myVector){
        std::cout << a << std::endl;
    }
}

// function to traverse vector through iterators:
void traverseVectorWithIterator( std::vector<int> const &myVector){
    std::vector<int>::iterator it;
    for(auto it = myVector.begin(); it != myVector.end(); ++it){
        std::cout << *it << std::endl;
    }
}

// function to test capacity of vectors:
void testVectorCapacity(std::vector<int>  &myVector){
    // std::cout << "Capacity of vector is : "<< myVector.capacity() << std::endl;

    // for loop to keep adding items in the vector and comparing the capacity:
    for(int i = 0; i < 5; i++){
        myVector.push_back(i);
        std::cout << "Size of vector is : "<< myVector.size() << std::endl;
        std::cout << "Capacity of vector is : "<< myVector.capacity() << std::endl;
        
    }
    std::cout << "RUNNING SHRINK TO FIT..." << std::endl;
    myVector.shrink_to_fit();
    std::cout << "Size of vector is : "<< myVector.size() << std::endl;
    std::cout << "Capacity of vector is : "<< myVector.capacity() << std::endl;
}

int main(){

    std::vector<int> myVector = {};
    // traverseVector(myVector);
    // traverseVectorWithIterator(myVector);
    testVectorCapacity(myVector);

    return 0;
}