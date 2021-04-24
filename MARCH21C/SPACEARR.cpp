#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n, 0);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        ll ans = 0;
        for (int i = 0; i < n; i++)
            ans += arr[i];

        sort(arr.begin(), arr.end());

        ll summ = n * (n + 1);
        summ /= 2;

        ll cnt = 0;
        bool flg = false;

        for (int i = 0; i < n; i++)
        {
            if (arr[arr.size() - i - 1] > n - i)
            {
                flg = true;
                break;
            }
        }

        ll res = summ - ans;
        if (res > 0 && res % 2 == 1 && flg == false)
            cout << "First" << endl;
        else
            cout << "Second" << endl;
    }
    return 0;
}
