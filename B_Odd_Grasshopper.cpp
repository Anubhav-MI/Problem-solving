#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x, n;
        cin >> x >> n;
        ll rem = n % 4;
        ll d = 0;
        if (rem == 1)
            d = -n;
        else if (rem == 2)
            d = 1;
        else if (rem == 3)
            d = n + 1;
        else
            d = 0;

        if (x % 2 == 0)
            d = x + d;
        else
            d = x - d;
        cout << d << endl;
    }
    return 0;
}