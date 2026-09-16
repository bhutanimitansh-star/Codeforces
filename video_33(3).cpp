#include <bits/stdc++.h>
using namespace std ;

int LinearSearch(int arr[], int size, int k){
    if(size == 0){
        return false;
    }
    if (arr[0] == k){
            return true;
        }
    else{
        bool remainingPart = LinearSearch(arr +1, size -1, k);
         return remainingPart; 
    }
}
int main(){
    int size = 5;
    int arr[5] = {4,5,6,78,9};
    int k = 1;
    bool ans = LinearSearch(arr,size,k);

    if(ans){
        cout << "Present" << endl;
    }
    else{
        cout << "Not Present" << endl;
    }

    return 0;
}