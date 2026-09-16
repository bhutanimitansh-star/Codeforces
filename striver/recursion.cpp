

#include<bits/stdc++.h>
using namespace std;

// int factorial(int n){
//     if(n == 0){
//         return 1;
//     }
// //    int chooti = factorial(n-1);
// //    int baddhi = n * chooti;

// //    return baddhi;
// int f = n * factorial(n-1);
// return f;

// }

int power(int a,int n){
    if(n == 0){
        return 1;
    }
    int small = power(2,n-1);
    int baddhi = 2*small;
    return baddhi;
}
int main(){
int n;
cin >> n;

int ans = power(2,n);
cout << ans << endl;
}