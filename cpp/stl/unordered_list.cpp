#include <iostream>
#include <unordered_map>

int main(){
    std::unordered_map<std::string, int> myMap = {{"apple", 1}, {"banana", 2}};

    // insert values:
    std::pair<std::string, int> myPair = {"fish", 10};
    myMap.insert(myPair);

    // or create a pair differently:
    myMap.insert({"cake", 20});

    for (auto it = myMap.begin(); it != myMap.end(); ++it) {
        std::cout << it->first << ": " << it->second << std::endl;
    }

    // iterate over and increement all keyValue frequencies:
    for(auto it = myMap.begin(); it != myMap.end(); ++it){
        it->second++;
    }
    std::cout << "-----------final results are : " << std::endl;
    for(auto & [key,value]: myMap){
        std::cout << key << " : " << value << std::endl;
    }

    return 0;
}