#include <iostream>
#include <bits/stdc++.h>

void printstack(std::stack<int> st){
    while(!st.empty()) {
        std::cout << st.top();
        st.pop();
    }
}

int stackpostfix(std::string expression){
    std::stack<int> mystack;    

    for(int i= 0; i < expression.length(); i++){
        // printstack(mystack);
        if(isdigit(expression[i])){
            mystack.push(expression[i] - '0');
        }
        else{
            
            int val1 = mystack.top();
            mystack.pop();
            int val2 = mystack.top();
            mystack.pop();
            int res;
            switch(expression[i]){
            
                case('+'):
                     res = val2 + val1;
                    mystack.push(res);
                    break;
                case('-'):
                     res = val2 - val1;
                    mystack.push(res);
                    break;
                case('*'):
                     res = val2 * val1;
                    mystack.push(res);
                    break;
                case('/'):
                     res = val2 / val1;
                    mystack.push(res);
                    break;
            }  
        }
    } // end of loop
    return mystack.top();
  
}

int main(){

    std::string expression = "231*+9-";
    int result = stackpostfix(expression);
    std::cout << result << std::endl;
    
    return 0;
}