/*
This program 
*/
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <fstream>
#include <bits/stdc++.h> 

void strToBinary(std::string s, std::string fileToWriteTo) 
{ 
	int n = s.length();
	std::fstream myfile;
	myfile.open(fileToWriteTo);

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
		myfile << bin << " ";
	} 
	myfile.close();
} 

int main (){
	std::ifstream myfile("fileToRead.txt");
	std::string line;

	while(std::getline(myfile, line)){
		std::istringstream iss(line);
		int a, b;
		if(!iss >>a >> b){
			break;
		}
		strToBinary(line, "exportedFile.txt");
	}

	myfile.close();

	return 0;
}