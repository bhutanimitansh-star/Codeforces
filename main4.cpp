// #include <bits/stdc++.h>
// using namespace std;

// int secondLargestElement(vector<int>& nums) {
//         int maximum = *max_element(nums.begin(), nums.end()) ; 
//         int secondlargest = INT_MIN ; 
//         for(int i = 0 ; i < nums.size() ; i++ ){
//             if(nums[i] < maximum){
//                 if(secondlargest >= nums[i])
//                     secondlargest = nums[i]; 
//             }
//         }
//         if(){

//         }
//         return secondlargest ; 
// }

// int main() {
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     #endif
//     vector<int> nums = [8 8 7 6 5]; 
//     secondLargestElement(nums) ; 
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int power(int n){
    if(n == 0){
        return 1; 
    }

        int chhoti = power(n);
        int  baddhi = 2*chhoti;
        return baddhi;
    
}
int main(){
int n;
cin >> n;
cout << power(n) << endl;
return 0;
}