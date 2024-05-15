#include "Queue.h"

// #include <algorithm> 
// #include "../../../../../../../../usr/include/c++/11/bits/algorithmfwd.h"
// #include "../../../../../../../../usr/include/c++/11/bits/char_traits.h"

QClass::QClass(int _qSize){
    int newArr[_qSize]; 
    std::copy(q, q + 10, newArr); 
};

bool QClass::isEmpty(){
    if(front == -1 && back == -1){
        return true;
    }else{
        return false;
    }
}

// check if its full:
bool QClass::isFull(){
    // size_t size = (sizeof(this->q)/sizeof(*q));

    // if(front == 0 && back == ) {

    // }
    return true;
}


void QClass::Enqueue(int value){

}

void QClass::Dequeue(int value){
    
}


