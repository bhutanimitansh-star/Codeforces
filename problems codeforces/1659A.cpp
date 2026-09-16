

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, r, b;
        cin >> n >> r >> b;
        int gap = r / (b + 1);
        int extra = r % (b + 1);

        string ans = "";

        for (int i = 0; i < b + 1; i++)
        {

            // put R
            int cnt = gap;
            if (extra > 0)
            {
                cnt++;
                extra--;
            }

            ans += string(cnt, 'R');

            // put B except last block
            if (i < b)
                ans += 'B';
        }

        cout << ans << endl;
    }
    return 0;
}