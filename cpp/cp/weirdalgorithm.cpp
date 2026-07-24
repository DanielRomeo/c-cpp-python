#include <iostream>
#include <bits/stdc++.h>

int main(){

    long long input, n;
    // n = input;
    std::cin >> n;
    input = n;
    std::vector<long long> vec ;
    // std::cout << n << " ";
    while (n!=1){
        if(n % 2 == 0){
            n = n/2;
            vec.push_back(n);
        }else{
            n = n*3 + 1;
            vec.push_back(n);
        }
    }
    std::cout << input << " ";
    for(auto elem: vec){
        std::cout << elem << " ";
    }
    return 0;
}