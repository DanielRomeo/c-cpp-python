#include <iostream>
#include <random>

constexpr int NUM_ROWS = 5;
constexpr int NUM_COLUMNS = 6;

// create a function  that  will popluate the values in the 2d arrays:
void populateRandomly(int (&matrix)[NUM_ROWS][NUM_COLUMNS]){
    for (int i = 0; i < NUM_ROWS; i++)
    {
        for (int j = 0; j < NUM_COLUMNS; j++)
        {   
            // getting random values:
            std::random_device rd;
            std::mt19937 gen(rd());
            std::uniform_int_distribution<int> distribution(1,10);

            matrix[i][j] = distribution(gen);
        }
    }
}

int main(){

    int matrixA[NUM_ROWS][NUM_COLUMNS] ;
    int matrixB[NUM_ROWS][NUM_COLUMNS];

    populateRandomly(matrixA);
    populateRandomly(matrixB);

    int nrNotSame = 0;

    // now we have to  determine how many elems are identical or not?
    for (int i = 0; i < NUM_ROWS; i++)
    {
        for (int j = 0; j < NUM_COLUMNS; j++)
        {   
            // for visual purposes,lets show the values:
            std::cout << "matrix A : " << matrixA[i][j] << ", matrix B : " << matrixB[i][j] << '\n';

            if(matrixA[i][j] == matrixB[i][j]){
                nrNotSame++;
            }
        }
        
    }
    std::cout << std::endl;
    std::cout  << "No of non same elements are : " << nrNotSame << std::endl;
    

    return 0;
}