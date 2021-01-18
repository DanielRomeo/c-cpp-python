#include <iostream>
#include <cmath>
#include <array>
#include <string>
#include <vector>
#include <iterator>

void print(std::pair<uint, uint>& obj ){
    std::cout << obj.first << " " << obj.second << std::endl;
}

// template<class T>
// class Cookpair{
//     private:
//         std::string name;
//         T number;

//     bool operator < (const Cookpair& cookpair ) const {
//         return number < cookpair.number;
//     }
// };
 
int main(){

    {
        #if 0
            //cook pair declaration
            Cookpair<std::string, double> sam("daniel", 105 );
        #endif
    }
    
    {
        // creating and assigning immidiately
        std::pair<uint, uint> pair(50,100);
        print(pair);

        //creating first and assigning later
        std::pair<uint, uint> obj1; // first pair
        obj1 = std::make_pair(100,1000);
        std::pair<uint, uint> obj2; //second pair
        obj2 = std::make_pair(500,15000);

    
        // create a vector of pairs & add elements to it
        std::vector< std::pair<uint, uint>> mylist;
        mylist.push_back(obj1); // a way
        mylist.push_back(obj2);
        mylist.push_back(std::pair<uint,uint >(12, 13151) ); // another way
        mylist.push_back(std::make_pair(64, 787)); // another way
    

        // print the contetnts of my vector:
        for(auto a: mylist){
            std::cout << a.first << " " << a.second << std::endl;
        }
    }


        
    return 0;
}