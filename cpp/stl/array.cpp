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

    vector.erase();
    vector.erase(pos, pos)
    vector.erase(vec.begin(), vec.end()+4) // takes addresses as params:
*/

int main(){

    std::array<int, 3> myarray = {100,105, 108};
    std::array<int, 2> array2;
    std::array<std::string, 2> myarray3;
    myarray3 = {"david", "sam"};

    std::vector<int> vec1 = {1000, 3000, 100,150, 350};
    vec1.resize(1000);
    std::cout << "Capacity is: "<< vec1.capacity() << std::endl;
    std::cout << "Size is: "<< vec1.size() << std::endl;
    // int *p = &myarray.begin();
    // vec1.pop_back();

    /*Returning a memory address of an array or a vector */
    // std::cout << myarray.data() << std::endl; // returns memory address
    // std::cout << vec1.data() << std::endl; // returns memory address

    // std::cout << "The pop_back() function retutns: " << vec1[1] << std::endl;

    // vec1.insert(0,999); // this is wrong
    //vec1.erase(vec1.begin(), vec1.begin()+2);

    // for (auto i = vec1.begin(); i < vec1.end(); i++)
    // {
    //     std::cout << "Value is : " << *i << std::endl;
    // }
    

    return 0;
}