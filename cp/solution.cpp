#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

	int n;
	cin >> n;
	string word;
	string newword;
	vector<string> vec;
	for (auto i = 0; i < n; i++) {
		cin >> word;
		if (word.length() > 10) {
			newword = word[0] +std::to_string(word.length()-2) + word[word.length()-1];
			vec.push_back(newword);
		}
		else {
			vec.push_back(word);
		}
	}

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << std::endl;
	}

	

	return 0;
}

