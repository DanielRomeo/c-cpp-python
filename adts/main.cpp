#include <iostream>
#include <cmath>
#include <cstdlib>
#include "math.h"
#include <vector>
#include <cstdio>
#include "user.h"
using namespace std;



int main(){

	User daniel("daniel", 15);
    // string name;

    // cout << "Enter name and age" << endl;
    // cin >> name;
    // cout << "Your name is " << name << endl;

    daniel.setDetails("sa", 15);
    daniel.getDetails();

    return 0;
}
    