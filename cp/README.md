## template code:
```
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// This macro creates a fast I/O function
void fast_io() {
    ios_base::sync_with_stdio(false); // Disables synchronization with C streams
    cin.tie(NULL);                    // Unties cin from cout (flushes output only when needed)
}

int solve() {
    // Write your actual problem-solving logic here
    int n;
    if (!(cin >> n)) return 0;
    
    // Example logic
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    return 0;
}

int main() {
    fast_io(); // ALWAYS call this at the very start of main()
    
    int t = 1;
    cin >> t; // Read number of test cases (standard for Codeforces)
    while (t--) {
        solve();
    }
    
    return 0;
}
```

## compile with this command:
``` g++ -O3 -std=c++17 -Wall -Wextra -Wshadow solution.cpp -o solution```