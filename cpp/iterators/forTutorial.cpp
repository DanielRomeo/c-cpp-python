#include <iostream>
#include <vector>
#include <list>

int main()
{
    std::vector<int> numbers = {10,20,30,40,50};
    std::vector<int>::iterator it = numbers.begin();

    while(it != numbers.end() ){
        *it *= 2;
        ++it;
    }
    std::cout << "Where you can test code. \n";


    std::list<int> mylist = {1,2,3,50  ,5,6};
    for(const auto element: mylist){
        std::cout << element  << std::endl;
    }

    std::cout << std::endl;
    
    std::list<int> c1 = {3, 100};
    
    // print the list:
    for(const auto &elem : c1){
        std::cout << elem << std::endl;
    }

    // insert new element at position index 1:
    auto it2 = c1.begin();
    it2++;
    // std::cout << *it2 << std::endl;
    c1.insert(it2, 500);

    // print the list:
    std::cout << std::endl;
    std::cout << "New list is :" << std::endl;
    for(const auto &elem : c1){
        std::cout << elem << std::endl;
    }


    return 0;
}