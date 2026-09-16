





#include<bits/stdc++.h>
using namespace std;

// int sum(int arr[],int n){
//     if(n == 0){
//         return 0;
//     }
//     else{
//         return (arr[0] + sum(arr+1,n-1)); 
//     }
// }

// bool linear_search(int arr[],int n,int k){
// if(n == 0){
//     return 0;
// }
// if(arr[0] == k){
//     return true;
// }
// else{
//     bool remaing_part = linear_search(arr+1,n-1,k);
//     return remaing_part;
// }
// }

bool binary_search(int*arr,int s,int e,int k){
    if(s>e){
        return -1;
    }
    int mid = s+(e-s)/2;
    if(arr[mid] < k){
        return binary_search(arr,mid+1,e,k);
    }
    else{
        return binary_search(arr,mid-1,s,k);
    }
}
bool printing_name(int n,int i){
    if(i>n){
        return 0 ;
    }
    cout << "RAJ" << endl;
    return printing_name(n,i+1);
    
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int ans =printing_name(6,0);

    if(ans){
        cout << "Key is present" << endl;
    }
    else{
        cout << "Key is not present" << endl;
    }

}