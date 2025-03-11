#include <bits/stdc++.h>
using namespace std;
#define ll long long
map<long long, long long> mp;
void solve()
{
    long long n, x, k;
    cin >> n >> x >> k;
    string s;
    cin >> s;
    if ((n >= 1 && k > 2) && ((x == -1 && s[0] == 'R' && s[1] == 'L') || (n >= 1 && x == 1 && s[0] == 'L' && s[1] == 'R')))
    {
        if (k % 2)
            cout << k / 2 + 1 << endl;
        else
            cout << k / 2 << endl;
        return;
    }
    long long ans = 0;
    long long timer = 0;
    for (int i = 0; i < n; i++)
    {
        timer++;
        if (s[i] == 'L')
            x--;
        else
            x++;
        if (x == 0)
        {
            ans++;
            i = -1;
        }
        if (timer >= k)
            break;
    }
    cout << ans << endl;
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
