#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;

        vector<int> a(k + 1), b(k + 1);

        if (k % 2 == 0)
        {
            for (int i = 1; i <= k / 2; i++)
            {
                a[i] = x - i;
                a[i + k / 2] = x + i;
            }
            for (int i = 1; i <= k / 2; i++)
            {
                b[i] = y - i;
                b[i + k / 2] = y + i;
            }
        }
        else
        {
            for (int i = 1; i <= k / 2; i++)
            {
                a[i] = x - i;
                a[i + k / 2] = x + i;
            }
            for (int i = 1; i <= k / 2; i++)
            {
                b[i] = y - i;
                b[i + k / 2] = y + i;
            }
            a[k] = x;
            b[k] = y;
        }

        for (int i = 1; i <= k; i++)
        {
            cout << a[i] << ' ' << b[i] << endl;
        }
    }

    return 0;
}