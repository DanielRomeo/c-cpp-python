#include <iostream>
#include <algorithm>


void printVector(std::vector<int> vec){
    
    for(int i = 0; i < vec.size(); i++){
        std::cout << vec[i] << std::endl;
    }
}

// Function that moves elements to the right 1 space:
void moveByOne(std::vector<int> vec){
    int j = 0;
    for(int i = 0; i < vec.size(); i++){
        if(vec[i] == 100){
            j=i;
            while(j >= 0 ){
                vec[j] = vec[j-1];
                j--;
            }
        }
    }
    printVector(vec);
}

int main(){

    std::vector<int> vec =  {1,2,3,4,5,100,6,7,8};
    moveByOne(vec);
    // printVector(vec);

    return 0;
}