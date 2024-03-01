#include <iostream>
#include <vector> // array link container
#include <list> // doubly linked list
#include <forward_list> // linked list

// How to use an iterator to traverse? Using one function

// Difference between bi-directional and forward iterators
// Difference between random access iterators and bi-directional iterators

// Use range based for loop as an Alternative if you are allowed!

// create a function that takes all types of containers:
template<typename T>
void print(const T& containerName){
    typename T::const_iterator it = containerName.begin();
    for(it; it != containerName.end(); ++it){
        std::cout << *it << std::endl;
    }
}

// best way of doing things:
// function:
void printBetter(std::forward_list<int> flist){
    for(auto elems: flist){
        std::cout << elems << std::endl;
    }
}



int main(){
    std::vector<int> vec = {1,2,3,4,5,6};
    std::forward_list<int> flist = {1,2,3,4,5,6};
    std::list<int> list = {1,2,3,4,5,6};
    // print(list);
    std::vector<int>::iterator vecIterator = vec.begin();
    std::forward_list<int>::iterator flistIterator = flist.begin();
    std::list<int>::iterator listIterator = list.begin();

    flistIterator++;
    // flistIterator--;
    // std::cout << *flistIterator << std::endl;

    listIterator++;
    listIterator--;
    // listIterator+2;
    // std::cout << *listIterator << std::endl;

    // vecIterator++;
    // vecIterator--;
    // vecIterator+3;
    vecIterator+2;
    // std::cout << *vecIterator << std::endl;


    printBetter(flist);

    return 0;
}


