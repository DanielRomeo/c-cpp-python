#include <iostream>
#include <vector>

int main(){

    //create a vector and name it tops:
    // std::vector<int> tops={10,20,30,40};
    // auto it = lower_bound(tops.begin(), tops.end(), 9);

    // get the position or index:
    // int pos = it - tops.begin();
    // int size = 6;
    
    // declare variables:
    // std::vector<int> vec = {9,4,3,6,2,4}; // vector of size of 6
    std::vector<int> vec = {1,3,2,4}; // vector of size of 6

    std::vector<int> test = {}; 

    // insert the first value in the array, then begin traversing the inputs.
    test.push_back(vec[0]);
    for(auto i = 1; i < vec.size(); i++){
        // std::cout << vec[i] << std::endl;

        auto it = std::lower_bound(test.begin(), test.end(), vec[i]);
        int position = it - test.begin();

        if(vec[i] < *it) { // if the xvalue in array is smaller than the index value we are in in the arr,
            test[position] = vec[i]; // replace it in the test array , with smaller value
        }else if(vec[i] == *it){
            continue;
        }else{
            test.push_back(vec[i]);
        }
    }

    // print the length of the test vector:
    std::cout << test.size() << std::endl;

   return 0;
}
