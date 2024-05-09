#include <fstream>
#include <iostream>
#include <stack>
#include <regex>

// validate function:
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

// -------------
void addUrl(std::stack<std::string> & backward_stack, std::stack<std::string> & forward_stack){
   
    std::string URL;
    std::cin >> URL;

    if(validateURL(URL)){
        for(int i = 0; i < forward_stack.size(); ++i){
            backward_stack.push(forward_stack.top());
            forward_stack.pop();
        }
        backward_stack.push(URL);
        std::cout << "Current URL is " << backward_stack.top() << "\n" ;
    }else{
        std::cerr << "Error, invalid URL, please insert valid one" << "\n";
        addUrl(backward_stack, forward_stack);
    }
}

void navigateBackward(std::stack<std::string> & backward_stack, std::stack<std::string> & forward_stack){
    if(backward_stack.size() == 1){
        std::cerr << "No backward element in the stack "<< "\n";
    }else{
        forward_stack.push(backward_stack.top());
        backward_stack.pop();
    }
    std::cout << "Current URL is " << backward_stack.top() << "\n" ;
}
void navigateForward(std::stack<std::string> & backward_stack, std::stack<std::string> & forward_stack){
    if(forward_stack.empty()){
        std::cerr << "No forward element in the stack "<< "\n";
    }else{
        backward_stack.push(forward_stack.top());
        forward_stack.pop();
    }
    std::cout << "Current URL is " << backward_stack.top() << "\n" ;
}

void App(std::stack<std::string> & backward_stack, std::stack<std::string> & forward_stack){
    // print the menu items:
    int option;
    while(true){
        std::cout << "Menu" << "\n" << "1. Add URL" << "\n" << "2. Navigate backward" << "\n" << "3. Navigate forward" << "\n" << "4. Exit" << std::endl;
        std::cin >> option;
        switch (option)
        {
        case 1:
            addUrl(backward_stack, forward_stack);
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


int main() {

    std::stack<std::string> backward_stack;
    std::stack<std::string> forward_stack;

    fileInitializer(backward_stack);

    App(backward_stack, forward_stack);

    // main application
    // App();


    return 0;
}
