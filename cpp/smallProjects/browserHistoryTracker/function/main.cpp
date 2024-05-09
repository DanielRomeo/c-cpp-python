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

void navigateForward(std::stack<std::string> & backward_stack, std::stack<std::string> & forward_stack){
    if(forward_stack.empty()){
        std::cerr << "There are no forward links !" << std::endl;
        std::cout << "\n";

    }else{
        // remove element from forward stack, and place in backward stack:
        backward_stack.push(forward_stack.top());
        forward_stack.pop();
        std::cout << "Navigated to " << backward_stack.top() << std::endl;
        std::cout << "\n";
    }
}
void navigateBackward(std::stack<std::string> & backward_stack, std::stack<std::string> & forward_stack){
    // if the size of the backward_stack is 1, then there are no more links that come before.
    if(backward_stack.size() == 1){  
        std::cerr << "There are no backward links !" << std::endl;
        std::cout << "\n";
    }else{
        // remove element from backward_stack, and place in forward stack:
        forward_stack.push(backward_stack.top());
        backward_stack.pop();
        std::cout << "Navigated to " << backward_stack.top() << std::endl;
        std::cout << "\n";

    }
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
            std::cout << "You have successfully inserted the URL into the browser." << std::endl;
            std::cout << std::endl;
            validated = true;
        }else{
            std::cerr << "The Url you are trying to insert is invalid" << std::endl;
        }
    }

    std::cout << "Navigated to " << backward_stack.top() << std::endl;
    std::cout << "\n";
}

void App(std::stack<std::string> & backward_stack, std::stack<std::string> & forward_stack){
    
    // create an infinite loop:
    while(true){
        // to_string MENU shower:
        std::cout << "MENU" << "\n" << "1. New URL" << "\n" <<"2. Navigate back" << "\n" << "3. Navigate forward" << "\n" << "4. Exit" << std::endl;

        // take user input and run neccessary function:
        int option;
        std::cin >> option;
        switch (option)
        {
        case 1:
            addURL(backward_stack, forward_stack);
            break;
        
        case 2:
            navigateBackward(backward_stack, forward_stack);
            break;
        case 3:
            navigateForward(backward_stack, forward_stack);
            break;
        case 4:
            return;
        default:
            break;
        }
    }

}



int main(){
    // our current URL is always at the top of the backward_stack:

    // create stacks:
    std::stack<std::string> forward_stack;
    std::stack<std::string> backward_stack;

    // initialize the BrowserHistory file & start the application:
    fileInitializer(backward_stack);
    App(backward_stack, forward_stack);

    return 0;
}