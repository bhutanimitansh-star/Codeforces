#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long x, y, k;
        cin >> x >> y >> k;

        long long sticks_needed = k * (y + 1) - 1;

        long long trades_for_sticks = sticks_needed / (x - 1);

        if(sticks_needed % (x - 1) != 0)
            trades_for_sticks++;

        cout << trades_for_sticks + k << endl;
    }
    return 0;
}