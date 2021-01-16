#include <iostream>
#include <cmath>
#include <array>
#include <string>
#include <vector>
// #include <pair>
#include <iterator>

/*
    ALL MAP DATASTRUCTURES use pair within them
    MAPS probaby do something line std::cout
*/

// function that prints a pair:
void print(std::pair<uint, uint>& obj ){
    std::cout << obj.first << " " << obj.second << std::endl;
}

template<class T>
class Cookpair{
    private:
        std::string name;
        T number;

    bool operator < (const Cookpair& cookpair ) const {
        return number < cookpair.number;
    }
};
 
int main(){

    //cook pair declaration
    Cookpair<std::string, double> sam("daniel", 105 );

    /*declaration*/
    std::pair<uint, uint> pair(50,100);
    // std::pair<uint, uint> object = std::make_pair(100, 1000);
    // print(object);
    print(pair);

    
    std::make_pair("dd", 100);
    {
        // create a vector of pairs:
        /*Whats clear is that we can push different pairs into a vector-> crazy*/
        std::vector<std::pair<std::string, uint>> mylist;
        mylist.push_back(std::make_pair("daniel", 1500)); // a way
        mylist.push_back(std::pair<std::string,uint >("romeo", 13151) ); // another way
    }


        
    return 0;
}