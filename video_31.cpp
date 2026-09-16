#include <bits/stdc++.h>
using namespace std;


int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    int chotti = factorial(n - 1);
    int baddhi = n * chotti;
    return baddhi;
}

int main() {
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}
