#include <iostream>
#include <stack>
using namespace std;

// take the size of the array as N
// then take the input from the user as variables
// then print out the output to the screen 

int main() {

     /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, a,b,c,d;
    cin >> n;
    // cin >> a>>b>>c>>d;
  
    int arr[n];
    
    // run n times and insert elements in array:
    for(int i =0; i < n; i++){
        cin >> a;
        arr[i] = a;
    }


    std::cout <<"Here is what is inside my array:" << std::endl;
    for(auto i =0; i < n; i++){
        std::cout << arr[i] << std::endl;
    }

    // print n times, all elements in reverse:
    for(int j = n ; j > 0; --j){
        cout << arr[j-1];
    }
    return 0;
}
