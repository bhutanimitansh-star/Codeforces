#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    // left rotate by 2 using adjacent swaps
    for(int shift = 0; shift < 2; shift++) {
        for(int i = 0; i < s.length() - 1; i++) {
            swap(s[i], s[i + 1]);
        }
    }

    cout << s;
    return 0;
}
