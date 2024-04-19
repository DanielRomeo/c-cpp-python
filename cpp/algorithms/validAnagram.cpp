#include <iostream>
#include <unordered_map>

// Given two strings, determine if one string is a valid anagram of the other or not:

// we're basically adding, and then the second loop, we're subtracting ... in order to keep track.
bool IsAnagram( const std::string &s, const std::string &t){

    // first we check the size:
    if(s.size() != t.size()){
        return false;
    }
    
    // instatiate the hashtable:
    std::unordered_map<char, int> myMap;

    // loop through the strings and increment the value of the variable whenever we encounter the letter:
    for(auto &key: s){
        myMap[key]++;
    }

    for(auto &key: t){
        if(myMap.find(key) == myMap.end() || myMap[key] == 0){ // if it doesnt exist or if its zero:
            return false;
        }
        myMap[key]--; // decrement the value if the key is found and its not zero
    }
    return true;
}

int main(){

    std::string s = "anagram";
    std::string t = "naagram";
    std::cout << "isValidAnagram returned : " << (IsAnagram(s,t) ? "true": "false") << std::endl;


    return 0;

}