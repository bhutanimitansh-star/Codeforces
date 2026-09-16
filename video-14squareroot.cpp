#include <bits/stdc++.h>
using namespace std;

int sqrtInteger(int n) {
    int s = 0, e = n, ans = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        long long square = 1LL * mid * mid;
        if (square == n) {
            return mid;
        }
        if (square < n) {
            ans = mid;
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}

double morePrecision(int n, int precision, int tempSol) {
    double factor = 1;
    double ans = tempSol;

    for (int i = 0; i < precision; i++) {
        factor = factor / 10;

        for (double j = ans; j * j <= n; j += factor) {
            ans = j;
        }
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter a number " << endl;
    cin >> n;

    int tempSol = sqrtInteger(n);
    cout << "Answer is " << morePrecision(n, 3, tempSol) << endl;

    return 0;
}
