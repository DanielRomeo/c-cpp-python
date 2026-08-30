#include <iostream>
#include <string>
using namespace std;

int main() {

	int n;
	cin >> n;
	string word;
	string newword;
	for (auto i = 0; i < n; i++) {
		cin >> word;
		if (word.length() > 10) {
			newword = word[0] +int(word.length()-2) + word[word.length()];
			cout << newword << endl;
		}
		else {
			cout << newword << endl;
		}
	}

	return 0;
}