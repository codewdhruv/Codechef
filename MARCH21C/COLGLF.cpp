#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll nnn, eee, hhh, aaa, bbb, ccc;
        cin >> nnn >> eee >> hhh >> aaa >> bbb >> ccc;
        vector<ll> res;
        vector<ll> kkk;

        ll tmp = 0;
        for (int i = 0; i < n + 2; i++)
        {
            kkk.push_back(i);
        }
        for (ll mmm = 0; mmm <= n; mmm++)
        {
            ll x1 = lower_bound(kkk.begin(), kkk.end(), (2 * nnn - eee - 2 * mmm)) - k.begin();
            ll x2 = upper_bound(kkk.begin(), kkk.end(), (hhh - 3 * mmm)) - k.begin() - 1;
            if (x2 < x1 || x1 == n + 1)
                continue;
            if (x2 == n + 1 && x2 + 3 * m > h)
                continue;
            ll kkkk;
            if (c > a)
                kkkk = (x1 < (nnn - mmm) ? x1 : (nnn - mmm));
            else
                kkkk = (x2 < (nnn - mmm) ? x2 : (nnn - mmm));
            ll o = n - kkkk - m;
            if (kkkk + 2 * mmm >= 2 * nnn - e && kkkk + 3 * mmm <= hhh)
            {
                res.push_back(aaa * o + bbb * mmm + ccc * kkkk);
            }
        }
        if (res.size() == 0)
            cout << "-1" << endl;
        else
        {
            ll min = res[0];
            for (ll i = 0; i < res.size(); i++)
            {
                if (res[i] < min)
                    min = res[i];
            }
            cout << min << endl;
        }
    }
    return 0;
}
