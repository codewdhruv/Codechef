#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double a1, a2, a3, b, res;
        cin >> a1 >> a2 >> a3 >> b;
        res = 100 / (a1 * a2 * a3 * b);
        double ans = round(res * 100.0) / 100.0;
        if (ans >= 9.58)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}
