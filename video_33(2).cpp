#include <bits/stdc++.h>
using namespace std;

int isSum(int*arr , int size){
    if(size==0){
        return 0;
    }
    if (size == 1){
        return arr[0];
    }

 int remainingSum = isSum(arr, size-1);
 int ans = remainingSum + arr[size -1];
 return ans;
}
int main(){
int size ;
cin >> size ;
int *arr = new int[size];
cout << size << endl;
for (int i = 0; i < size; i++) {
        cin >> arr[i];  // ✅ take input for each element
    }

int ans = isSum(arr,size);
cout << ans << endl ;

delete[] arr; // free memory
    return 0;
}
