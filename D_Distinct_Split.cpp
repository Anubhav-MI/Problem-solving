#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    vector<int> cnt(26, 0), p(26, 0);
    for (auto x : s)
        cnt[x - 'a']++;
    int ans = 0;
    for (auto x : s)
    {
        --cnt[x - 'a'];
        ++p[x - 'a'];
        int cur = 0;
        for (int i = 0; i < 26; ++i)
        {
            cur += min(1, cnt[i]) + min(1, p[i]);
        }
        ans = max(ans, cur);
    }
    cout << ans << "\n";
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