#include <iostream>
#include <cmath>
#include <array>
#include <string>
#include <vector>

/*
stl::array tutorial

    std::array<int, 10> myarray;
*/

/*
    array.begin() returns the address of the first element in the array
    begin and end retutn memory addresses and so they are used when looping through the array...
    for(i = array.begin(); i != array.end(); ++i)}{}

    Accessors go like:
    myarray[]
    myarray.front()
    myarray.back()
    myarray.data() // returns the address of the array
*/

int main(){

    std::array<int, 3> myarray = {100,105, 108};
    std::array<int, 2> array2;
    std::array<std::string, 2> myarray3;
    myarray3 = {"david", "sam"};

    std::vector<int> vec1 = {1000};
    // int *p = &myarray.begin();

    std::cout << myarray.data() << std::endl;
    std::cout << vec1.data() << std::endl;

    return 0;
}