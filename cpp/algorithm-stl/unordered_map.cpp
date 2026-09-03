#include <iostream>
#include <unordered_map>

using namespace std;

int main(){

    // declare and instert items into unodered_map:
    std::unordered_map<std::string, int> mymap;
    mymap.insert({"Kim",30});
    mymap.insert({"Kooom",34});

    // checking if insertion was successful:
    // if not, render a cerr:
    auto [it, success] = mymap.insert({"Beverly", 43});
    if(!success){
        std::cerr << "There is an error in the processing.";
    }else{
        std::cout << "success \n";
    }

    
    std::cout << "hello" << std::endl;

    return 0;
}