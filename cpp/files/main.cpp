/*
	- Program thyat converts binary to text and vice versa
	- The program accepts a .txt file and loops through it and
	creates another file to dump the returnd contents there 

*/
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <bits/stdc++.h> 

void strToBinary(std::string s) 
{ 
	int n = s.length(); 
	for (int i = 0; i <= n; i++) 
	{ 
		int val = int(s[i]); 
		std::string bin = ""; 
		while (val > 0) 
		{ 
			(val % 2)? bin.push_back('1') : 
					bin.push_back('0'); 
			val /= 2; 
		} 
		reverse(bin.begin(), bin.end()); 

		std::cout << bin << " "; 
	} 
} 

int main() 
{
	// lets open and read from file
	std::fstream myfile;
	myfile.open("file.txt");
	
	// myfile << "wrote here \n";
	myfile.close();




	std::string s = "geeks flip scale"; 
	strToBinary(s); 
	return 0; 
} 

