#include <iostream>
#include <bits/stdc++.h>

// binary search function:
int binarySearch(int arr[], int sizeOfArray, int searchValue ){
   int start = 0;
   int end = sizeOfArray -1;
   int mid = 0;

    while(start <= end){
        mid = start+end / 2;

        if(arr[mid] == searchValue){
            return mid;
        }else if(searchValue > arr[mid]){
            start = mid-1;
        }else if(searchValue < arr[mid]){
            end = mid+1;
        }
    }
   return -1;
}

int main(){
   
   int searchValue = 40;
   int arr[] = {1,5,7,10,11};
   int sizeOfArray = sizeof(arr)/sizeof(arr[0]);
   int pos = binarySearch(arr, sizeOfArray, searchValue);

   std::cout << pos << std::endl;

    return 0;
}