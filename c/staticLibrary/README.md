## This is how to create a basic shared library in C/C++

### 1. Library.h
```cpp
#ifndef library_h__
#define library_h__

extern int add(int a, int b);
extern int subtract(int a, int b);


#endif // library h
```

### 2. Library.c
```cpp
#include "stdio.h"

int add(int a, int b){
    return a + b;
}

int subtract(int a, int b){
    return a - b;
}
```

### 3. main.c
```cpp
#include "stdio.h"
#include "library.h"

int main () {
    int a =23;
    int b = 44;
    int c = 0;
    
    c =  add(a,b);
    printf("the number is: %d\n", c);

    return 0;
}
```