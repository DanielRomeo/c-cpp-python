#include <iostream>
#include <cmath>
#include <cstdlib>
#include "math.h"
#include <vector>
// using namespace std;

const int N = 4;

// show matrix:
void showMatrix(const int matP[][N]){
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			std::cout << matP[i][j] << '\t';
		}
		std::cout << std::endl;
	}
}

void transpose(int matP[][N]){
	for (int i = 0; i < N-1; i++)
	{
		for (int j = i+1; j < N; j++)
		{
			std::swap(matP[i][j], matP[j][i]);
		}
	}
}

int main(){
	
	int a = 0;
	int b= 1;
	int sum;
	float p, q, r;
	float highestnumber;
	int secret, guess, absError;
	int num;
	int marks[25];
	int x = 13;
	int y = 45;
	int z = 20;

	int mat[][N] = { {1,2,1,2}, {3,4,3,4}, {5,6,5,6}, {7,8,7,8} };

	showMatrix(mat);

	transpose(mat);
	std::cout << std::endl;

	showMatrix(mat);

    return 0;
}
        

























   
