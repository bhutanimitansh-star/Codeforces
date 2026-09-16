#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int*arr,int s, int e, int k){

    if(s>e){
        return false;
    }
    
    int mid = s + (e-s)/2 ;
    if(arr[mid] == k)
    return true ;


    if(arr[mid] < k){
        return binarySearch(arr, mid +1 , e, k);
    }
    else{
        return binarySearch(arr,s,mid-1,k);
    }
}
int main(){
    int arr[5] = {2,3,4,15,19};
    int size = 5;
    int key = 15;
    bool ans = binarySearch(arr,0,size-1,key );

    if(ans){
        cout << "Present" << endl;
    }
    else{
        cout << "Not Present" << endl;
    }

    return 0;
}
   