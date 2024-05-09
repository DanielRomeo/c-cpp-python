#include <iostream>
#include <stack>
#include <regex> 
#include <fstream>

/* Initially wanted to use one stack for the problem, however realisezed that this was not 
possible, and I would need to have to use another data structre such as vectors or deque, which 
is not what is wanted in the assignment.
So we resort to using two stacks, which are a forwardStack and backStack stacks*/


// Simple regex pattern: starts with "www." and contains at least one period (.):
bool validateURL(const std::string url) {
    std::regex pattern("www\\..+\\..+");
    return regex_match(url, pattern);
}

// Initialize the file:
void fileInitializer(std::stack<std::string> & backward_stack){
    std::ifstream inputFile("BrowserHistory.txt");

    if (inputFile.is_open()) { // if the file is open
        std::string line; // instantiate a line
        while (std::getline(inputFile, line)) {
            // lets check if the strings are valid:
            if(validateURL(line)){
                backward_stack.push(line);
            }
        }
        inputFile.close(); 
        } else {
        std::cerr << "Error opening file!" << std::endl;
    }
}

void navigateForward(std::stack<std::string> & forward_stack){
    //
}
void navibateBackward(std::stack<std::string> & backward_stack){
    //
}
void addURL( std::stack<std::string> & backward_stack, std::stack<std::string> & forward_stack){
    bool validated = false;
    std::string URL;
    
    
    // Loop untill user inserts a valid URL:
    while(validated != true){
        std::cout << std::endl;
        std::cout << "Enter a URL" << std::endl;
        std::cin >> URL;
        if(validateURL(URL)){
            // first we move all the items in forward_stack, to the backward_stack before we insert:
            for(int i =0; i < forward_stack.size(); i++){
                backward_stack.push(forward_stack.top());
                forward_stack.pop();
            }
            backward_stack.push(URL);
            validated = true;
        }else{
            std::cerr << "The Url you are trying to insert is invalid" << std::endl;
        }
    }
}

void App(std::stack<std::string> & backward_stack, std::stack<std::string> & forward_stack){
    // to string menu shower:
    std::cout << "MENU" << "\n" << "1. New URL" << "\n" <<"2. Navigate back" << "\n" << "3. Navigate forward" << "\n" << "4. Exit" << std::endl;

    // take user input:
    int option;
    std::cin >> option;
    switch (option)
    {
    case 1:
        addURL(backward_stack, forward_stack);
        break;
    
    default:
        break;
    }

}



int main(){

    // create stack:
    std::stack<std::string> forward_stack;
    std::stack<std::string> backward_stack;

    fileInitializer(backward_stack);
    App(backward_stack, forward_stack);

    


    return 0;
}