




#include <bits/stdc++.h>
using namespace std ;

void love(int n){
if (n == 1){
    cout << "I hate ";
    return;
}
love(n-1);

if(n%2 == 0){
    cout << "that I love ";
}
else
cout << "that I hate ";

}

int main(){
int n;
cin >> n;
love(n);
cout << "it"
;}