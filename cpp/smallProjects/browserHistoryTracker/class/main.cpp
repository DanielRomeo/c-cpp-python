#include <iostream>
#include <stack>
#include <regex> 
#include <fstream>

class BrowserHistory{

public:

    bool validateURL(const std::string url) {
        std::regex pattern("www\\..+\\..+");
        return regex_match(url, pattern);
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
        if(backward_stack.size() == 1){  
            std::cerr << "There is no back link" << std::endl;
            std::cout << "\n";
        }else{
            forward_stack.push(backward_stack.top());
            backward_stack.pop();
            std::cout << "Navigated to " << backward_stack.top() << std::endl;
            std::cout << "\n";
        }
    }

    void addURL( std::stack<std::string> & backward_stack, std::stack<std::string> & forward_stack){
        bool validated = false;
        std::string URL;
        
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
    


private:
    std::stack<std::string> backward_stack;
    std::stack<std::string> forward_stack;
    
};

int main(){

    return 0;
}