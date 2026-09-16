#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;

    string s;
    cin >> s;

    int count = 0;
    for (int i = 0; i < a - 1; i++) {
        if (s[i] == s[i + 1]) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
