#include <iostream>
#include <vector>
#include <list>
#include <forward_list>


// How to use an iterator to traverse?
// Difference between bi-directional and forward iterators
// Difference between random access iterators and bi-directional iterators

// Use range based for loop as an Alternative if you are allowed!

// function to iterate over a container:
template<typename T>
void iterateOverContainer(const T& container){
  
    // for(int i =0; i < container.size(); i++){
    //     std::cout << container[i] << std::endl;
    // }

    typename T::const_iterator it = container.begin();
    for(it; it != container.end(); ++it){
        std::cout << *it << std::endl;
    }


}



int main(){
    std::vector<int> vec = {1,2,3,4,5,6};
    std::list<int> myList = {1,2,3,4,5,6};
    iterateOverContainer(vec);

    // std::forward_list<int> fList ={10,20,30};
    // std::forward_list<int>::iterator it;

    // it = fList.begin();
    // it++;
    // it++;
    // // it--;
    // // it+1;


    // // random access iterator:

    // std::vector<int> vec = {1,2,3,4,5};
    // std::vector<int>::iterator itVec = vec.begin();
    // itVec++;
    // itVec+3;


    // //std::cout << *it << std::endl;
    // std::cout << *itVec << std::endl;

    return 0;
}


