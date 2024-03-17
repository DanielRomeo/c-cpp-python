#include <iostream>
#include <cmath>
#include <cstdlib>
#include "math.h"
#include <vector>
#include <fstream>

void triangle(int num){
    int number = 5;
    for(int i =0; i < 5;i++){

        for(int j =0; j  < number; j++){
            std::cout << "*";    
        }
        std::cout << std::endl;
        number--;
    }
}

void reverseTriangle(int num){
    int number = 0;
    for(int i =0; i < 5;i++){

        for(int j =0; j  < number; j++){
            std::cout << "*";    
        }
        std::cout << std::endl;
        number++;
    }
}

void oppositetriangle(int num){
    int number = 5;
    int spacenumber = 0;

    for(int i =0; i < 5;i++){

        for(int k = 0; k < spacenumber; k++){
            std::cout << " ";
        }

        for(int j =0; j  < number; j++){
            std::cout << "*";    
        }
        std::cout << std::endl;
        number--;
        spacenumber++;
    }
}

void diomond(int num){
    int number = 1;
    int spacenumber = 5;
    

    for(int i =0; i < 5;i++){
        for(int k = 0; k < spacenumber; k++){
            std::cout << " ";
        }
        
        for(int j = 0; j < number; j++){
            std::cout << "*";    
        }
        std::cout << std::endl;
        number+=2;
        
        spacenumber--;
    }
}

int main(){
	
    diomond(5);
    return 0;
}
      
