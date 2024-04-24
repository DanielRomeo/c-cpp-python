#include <iostream>
#include <unordered_set>
#include <vector>

// the program checks if the array(vector) contains duplicates numbers in it. 
// if duplicates are found, then 1(true) will be printed, else, 0(false) will be printed.

bool containsDuplicateIterative( std::vector<int> const &nums){
    int current = nums[0];
    for(auto i = 0; i < nums.size(); i++){
        current = nums[i];
        for(auto j = i+1; j < nums.size() ; j++){ // the value of J is very important
            if(current == nums[j]){
                std::cout << current << "...and nums is : " << nums[j] << std::endl;
                return true;
                
            }
        }
    }
    return false;

}

bool containsDuplicate(std::vector<int> &nums){
    std::unordered_set<int> myset;
    for(int num: nums){
        if(myset.count(num)){ // checks if the element exits in the set or not
            return true;
        }else{
            myset.insert(num);
        }
    }
    return false;
}

int main(){

    std::vector<int> myNumbersVector = {1,2,3,4,5,100, 100};
    std::cout << containsDuplicateIterative(myNumbersVector) << std::endl;

    return 0;
}