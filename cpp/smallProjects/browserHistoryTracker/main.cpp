#include <iostream>
#include <stack>
#include <regex> 
#include <fstream>

/* Initially wanted to use one stack for the problem, however realisezed that this was not 
possible, and I would need to have to use another data structre such as vectors or deque, which 
is not what is wanted in the assignment.
So we resort to using two stacks, which are a forwardStack and backStack stacks*/

 forward(std::string url){

}

bool validateURL(std::string url) {
    // Simple regex pattern: starts with "www." and contains at least one period (.)
    std::regex pattern("www\\..+\\..+");
    return regex_match(url, pattern);
}

int main(){

    // create stack:
    std::stack<std::string> mystack;
    // mystack.push("www.water.com");

    // file to read from:
    std::ifstream inputFile("BrowserHistory.txt");

    if (inputFile.is_open()) { // if the file is open
        std::string line; // instantiate a line
        while (std::getline(inputFile, line)) {
            // std::cout << line << std::endl;

            // lets check if the strings are valid:
            if(validateURL(line)){
                mystack.push(line);
            }
            // std::cout << mystack.top() << std::endl;
        }
        inputFile.close(); // close the file
        } else {
        std::cerr << "Error opening file!" << std::endl;
    }


    return 0;
}