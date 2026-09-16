#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(vector<int>& nums) {
    int x = 0 ; 
    for(int i = 0 ; i < nums.size() -1; i++){
        if(nums[i] > nums[i+1]){
            x = i ;
            break;   
        }
    } 
    if( x== 0 ){
        return true ;   
    } 
    vector<int> v ; 
    int count = 0 ;   
    for(int i = x+1 ; i < nums.size()  ; i++ ){
        v.push_back(nums[i]); 
    }
    for(int i = 0 ; i < x+1 ; i++){
        v.push_back(nums[i]); 
    }
    sort(nums.begin(),nums.end());
    for(int i = 0; i < v.size(); i++){
        if
    }
    return true ; 
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> nums = {1, 2, 3}; 
    if(!check(nums)){
        cout << false << endl; 
    }else{
        cout << true << endl;
    }
    return 0;
}