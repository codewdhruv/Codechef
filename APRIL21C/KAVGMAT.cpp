#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        ll nn, mm, kk;
        cin >> nn >> mm >> kk;
        ll mat[nn][mm];
        ll result = 0;

        for (ll i = 0; i < nn; i++)
            for (ll j = 0; j < mm; j++)
                cin >> mat[i][j];

        ll max_dim = min(mm, nn);
        ll lll = 0;
        while (lll < max_dim)
        {
            lll++;
            if (lll == 1)
            {
                for (int i = 0; i < N; i++)
                {
                    for (int j = 0; j < M; j++)
                    {
                        if (mat[i][j] >= K)
                            result++;
                    }
                }
            }

            else
            {
                for (ll i = 0; i <= nn - lll; i++)
                {
                    for (ll j = 0; j <= mm - lll; j++)
                    {
                        ll sum = 0;
                        for (ll k = j; k < j + lll; k++)
                            for (ll p = i; p < i + lll; p++)
                                sum = sum + mat[p][k];

                        double average = ((double)sum / (lll * lll));
                        if (average >= kk)
                        {
                            result = result + mm - l - j + 1;
                            break;
                        }
                    }
                }
            }
        }
        cout << result << endl;
    }
    return 0;
}
