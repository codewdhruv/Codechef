#include <bits/stdc++.h>
using namespace std;

int solving(string ss, int nn, int kk)
{
    int count = 0;
    for (int i = 0; i < ss.length(); i++)
    {

        if (ss[i] == '*')
            count++;

        else
            count = 0;

        if (count >= kk)
            return 1;
    }

    return 0;
}

int main()
{
    long long int t;
    cin >> t;
    while(t--)
    {
        long long int nn, kk;
        cin >> nn >> kk;
        string str;

        cin >> str;

        solving(str, nn, kk);

        if (solving(str, nn, kk) == 1)
            cout << "Yes" << endl;

        else
            cout << "No" << endl;
    }
    return 0;
}
