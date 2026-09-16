#include <bits/stdc++.h>
using namespace std ;

int main(){
int k,w,n;
cin >> k>>w>>n;
int total = 0;
for (int i = 0; i <=n;i++){
    total += k*i;
}
if(total >w){
cout << (total - w) << endl;}
else
cout << 0 << endl;
return 0;

}