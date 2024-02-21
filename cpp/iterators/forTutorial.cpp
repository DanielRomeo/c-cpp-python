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
    for(const auto &element: mylist){
        std::cout << element  << std::endl;
    }


    return 0;
}