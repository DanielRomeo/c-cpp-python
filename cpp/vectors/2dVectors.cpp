
#include <iostream>

#include <stdio.h>
#include <stdlib.h>
#include<time.h>

#include <vector>

void print2dVector(std::vector<std::vector<int>> vec){
    for(int i = 0; i < vec.size(); ++i){
        
        std::cout << "-----" << std::endl;
        for(int j = 0; j < vec[i].size(); ++j){
            std::cout << vec[i][j] << std::endl;
        }
    }
}



void generateAndPrintRandomMatrix(){
    std::vector<std::vector<int>> vec;
    
    int size = 3;
    srand(time(0));

    for(int i = 0; i < size; i++){
        std::vector<int> innervec;

        for(int j = 0 ; j < size; j++){
            innervec.push_back(rand()% 100 + 1);
        }
        vec.push_back(innervec);
        // innervec.empty();
    }
    // std::cout << vec[0]<< std::endl;
    // print
    print2dVector(vec);
}

int main(){
    generateAndPrintRandomMatrix();

    return 0;
}


