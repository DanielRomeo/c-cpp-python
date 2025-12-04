#include <iostream>
#include <stack>
#include <string>
#include <vector>

// create a function that prints:
void print(std::string s, int printIteration = 0) {
    if(printIteration > 0){
        for(auto i =0; i < printIteration; i++){
            std::cout << s << std::endl;
        }
    }
}

void printVector(std::vector<int> myVector){
    std::vector<int>::iterator it = myVector.begin();
    while(it != myVector.end()){
        std::cout << *it << std::endl;
        it++;
    }
    
}


int main() {

    int count = 9;
    
    std::string sName = "Jaohn";
    // print(sName, 10);

    std::vector<int> vec = {1,2,3,4,55,66};
    printVector(vec);
   
    
    return 0;
}
