#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (tc--)
    {
        long long nn;
        cin >> nn;
        if (nn == 0)
            cout << nn << endl;

        else if (nn == 1)
            cout << 20 << endl;

        else if (nn == 2)
            cout << 36 << endl;

        else if (nn == 3)
            cout << 51 << endl;

        else if (nn == 4)
            cout << 60 << endl;

        else if (nn == 5)
            cout << 76 << endl;

        else if (nn == 6)
            cout << 88 << endl;

        else if (nn == 7)
            cout << 99 << endl;

        else if (nn == 8)
            cout << 104 << endl;

        else
        {
            long long bb = nn / 4;
            long long rr = nn % 4;
            long long cc = bb - 1;

            if (rr == 0)
                cout << (cc * 44) + 60 << endl;

            else if (rr == 1)
                cout << (cc * 44) + 76 << endl;

            else if (rr == 2)
                cout << (cc * 44) + 88 << endl;

            else
                cout << (cc * 44) + 99 << endl;
        }
    }
}
