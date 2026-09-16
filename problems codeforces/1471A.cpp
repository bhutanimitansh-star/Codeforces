#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;

        long long sum = 0;
        long long max_beauty = 0;

        for(int i = 0; i < n; i++){
            long long a;
            cin >> a;
            sum += a;
            max_beauty += (a + x - 1) / x;  
        }

        long long min_beauty = (sum + x - 1) / x;

        cout << min_beauty << " " << max_beauty << "\n";
    }
    return 0;
}
