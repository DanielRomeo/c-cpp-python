#include <iostream>

// globals:
const int NUM_QUESTIONS = 25; // number of questio

bool passOrNot(char answerArray[],char correctArray[]){
    // lets loop through:
    int correctCounter = 0;

    for(int i =0 ;  i  < 25; i++){
        if(answerArray[i] == correctArray[i]){
            correctCounter++;
        }
    }
    if(correctCounter >= 13){ // this is where the magic happened!
        return true;
    }else{
        return false;
    }
}

int main(){

    // I just gave the same ansersand questions to illustrate a  passing situation...

    char answerArray[NUM_QUESTIONS] = {'a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a'};
    char correctArray[NUM_QUESTIONS] = {'a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a'};
    bool pass;

    pass = passOrNot(answerArray, correctArray);

    if(pass == true){
        std::cout <<  "You passed..." << std::endl;
    }else{
        std::cout <<  "You failed!" << std::endl;
    }

    return 0;
}