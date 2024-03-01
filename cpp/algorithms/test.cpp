#include <iostream>
#include <bits/stdc++.h>

int evaluate(std::string expr){
    std::stack<int> mystack ;

    for(int i = 0; i < expr.length(); ++i){
        if(isdigit(expr[i])){
            mystack.push(expr[i] - '0');
        }else{
            int result, value1, value2;
            value1 = mystack.top();
            mystack.pop();
            value2 = mystack.top();
            mystack.pop();

            switch(expr[i]){
                case('+'):
                    result = value2 + value1;
                    mystack.push(result);
                    break;
                case('-'):
                    result = value2 - value1;
                    mystack.push(result);
                    break;
                case('*'):
                    result = value2 * value1;
                    mystack.push(result);
                    break;
                case('/'):
                    result = value2 / value1;
                    mystack.push(result);
                    break;    
            }

        }
    }

    return mystack.top();
}

int main(){
    std::string str = "231*+9-";
    int result = evaluate(str);
    std::cout << result << std::endl;

    return 0;
}