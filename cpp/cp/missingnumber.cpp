#include <iostream>
#include <bits/stdc++.h>

void printvector(std::vector<int> vec){
    for(int i = 0; i < vec.size(); i++){
        std::cout << vec[i] << " ";
    }
}

int main(){

    // declaration and read the inputs
    int n;
    int readnumber;
    std::vector<int> inputnumbers;

    // reading:
    std::cin >> n;
    for(int i = 0;i < n-1; i++){
        std::cin >> readnumber;
        inputnumbers.push_back(readnumber);
    }



    // printvector(inputnumbers);
    printvector(inputnumbers);

    return 0;
}