

#include <bits/stdc++.h>
using namespace std;
/*
Approach:
1. Group elements having the same remainder when divided by y.
2. Inside each group, count elements based on their remainder modulo x.
3. For remainder r, pair it with x-r because their sum is divisible by x.
4. Handle r = 0 and r = x/2 (when x is even) separately.
5. Add the number of valid pairs.

Time Complexity: O(n log n)
Space Complexity: O(n)
*/

int main() {
	int t;
	cin >> t; 
	while (t--) {
		int n, x, y;
		cin >> n >> x >> y; 
		vector<int> a(n, 0); 
		map<int, vector<int>> mp; 

		
		for (int i = 0; i < n; i++) { 
			cin >> a[i];
			mp[a[i] % y].push_back(a[i]);
		}

		long long int ans = 0; 
		for (auto it : mp) {
			vector<int> v = it.second;
			map<int, long long int> mp1; 
			
			for (int i = 0; i < v.size(); i++) {
				mp1[v[i] % x]++;
			}

			
			for (auto it : mp1) { 
				if (it.first == 0 || (it.first == x / 2 && x % 2 == 0)) {
					long long int cnt = it.second;
					ans += (cnt * (cnt - 1)) / 2;
					it.second = 0;
				} else {
					long long int cnt1 = it.second;
					long long int cnt2 = mp1[x - it.first];
					ans += cnt1 * cnt2;
					mp1[x - it.first] = 0; 
				}
			}
		}
		cout << ans << endl; 
	}
}

