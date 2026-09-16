#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >>a;
    if(a <= 5){
        cout << "1" << endl;
    }
    else if (a % 5 == 0){
      cout << a/5 << endl;  
    }
    else {
       a =  a/5;
       cout << (a+1) << endl;
    }
    return 0;
}