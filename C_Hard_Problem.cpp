#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        int ans = 0;
        int total = m * 2;
        ans += min(a, m);
        total -= min(a, m);
        ans += min(b, m);
        total -= min(b, m);
        ans += min(c, total);
        cout << ans << endl;
    }
    return 0;
}