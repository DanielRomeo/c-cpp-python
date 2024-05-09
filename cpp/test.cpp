#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


void update(int * a, int * b){
    *a = *a + *b;
    *b = abs(&a-&b);

	
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a, b;
    std::cin >> a >> b;
    int * a2 = &a;
    int *b2 = &b;
    update(a2, b2);

	std::cout << *a2 << " "<< *b2 <<std::endl;
    return 0;
}
