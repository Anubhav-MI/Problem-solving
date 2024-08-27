#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int k;
        ll ans = 0;
        if (b > a)
        {
            if (b - a < n)
                k = b - a;
            else
                k = n;
            ll sum1 = (ll)k * b - (ll)k * (k - 1) / 2;
            ll sum2 = (ll)(n - k) * a;
            ans = sum1 + sum2;
        }
        else
            ans = (ll)n * a;

        cout << ans << endl;
    }

    return 0;
}