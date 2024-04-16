#include <iostream>
#include <unordered_set>
#include <vector>

// the program checks if the array(vector) contains duplicates numbers in it. 
// if duplicates are found, then 1(true) will be printed, else, 0(false) will be printed.

bool containsDuplicate(std::vector<int> &nums){
    std::unordered_set<int> myset;
    for(int num: nums){
        if(myset.count(num)){
            return true;
        }else{
            myset.insert(num);
        }
    }
    return false;
}

int main(){

    std::vector<int> myNumbersVector = {1,2,3,4,5,100, 100};
    std::cout << containsDuplicate(myNumbersVector) << std::endl;

    return 0;
}