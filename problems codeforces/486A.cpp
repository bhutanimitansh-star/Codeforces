#include <bits/stdc++.h>
using namespace std;

long long PlusMinus(long long n) {
    if (n % 2 == 0)
        return n / 2;            
    else
        return -(n + 1) / 2;    
}

int main() {
    long long n;
    cin >> n;
    cout << PlusMinus(n) << endl;
    return 0;
}
