#include <stdio.h>
#include <math.h>

double getNorm( int sizeOfVector, int vector[] )
{
    double size = 0;
    int sum = 0;
    // add the items:
    for(short i = 0; i < sizeOfVector;++i){
        sum+= vector[i];
    }
    size = sqrt(sum);

    return size;
}

int main(){
    int arr[3] = {1,2,222};

    int n = getNorm(3, arr);
    printf("%d \n", n);
    return 0;
}
