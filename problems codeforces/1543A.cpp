#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a, b;
        cin >> a >> b;

        long long d = llabs(a - b);

        
        if(d == 0){
            cout << 0 << " " << 0 << endl;
            continue;
        }

        long long r = a % d;
        long long moves = min(r, d - r);

        cout << d << " " << moves << endl;
    }
    return 0;
}
