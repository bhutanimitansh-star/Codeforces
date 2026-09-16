#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int g = 0;
        for (int i = 0; i < n; i++)
        {
            g = gcd(g, abs(a[i] - (i + 1)));
        }

        cout << g << endl;
    }
    return 0;
}
