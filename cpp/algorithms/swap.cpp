// Algorithm to swap elements in an array:
#include <iostream>

void swap(int (&myArray)[], int posA, int posB ){
    int temp = posA;
    myArray[posA] = myArray[posB];
    myArray[posB] = myArray[temp];
}

template<size_t N>
void print(int (&myArray)[N]){
    for(int i = 0; i < N; i++){
        std::cout << myArray[i] << std::endl;
    }
}

int main(){
    int myArray[] = {5,4,3,2,1};
    print(myArray);
    swap(myArray, 0,3);
    std::cout << '\n';
    print(myArray);
    return 0;
}
