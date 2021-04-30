#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(int test=0)
{
    int L;
    cin >> L;

    string s;   
    cin >> s;

    int good = 0, bad = 0;

    for (auto c : s)
    {
        good += (c=='1');
        bad += (c=='0');

        if (good >= bad)
        {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
}

signed main() {
	int t;
	cin >> t;
	
	while (t--) solve();
	
	return 0;
}
