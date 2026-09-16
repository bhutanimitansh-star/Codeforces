#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    
    while(start <= end){
        int mid = start + (end - start)/2 ;
        if(arr[mid] == key)
        { return mid;}
        if(key > arr[mid])
         {start = mid + 1;}
        else{
         end = mid - 1;}   
    }
    return -1;
}

int main(){
int arr[6] = {1,2,4,6,8,9};
int size = 6;
int key = 8;

int index = binarySearch(arr,size ,key);

if (index!= -1)
cout << "Found" << index << endl ;
else 
cout << "Not Found" << endl;
}