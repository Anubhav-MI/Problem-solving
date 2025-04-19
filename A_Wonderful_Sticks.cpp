// JAI BAJARANGABALI
#include "bits/stdc++.h"
#define int long long
#define vi vector<int>
#define fr(i, n) for (int i = 0; i < (n); i++)
#define all(v) v.begin(), v.end()
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    deque<int> a;
    for (int i = 1; i <= n; i++)
    {
        a.push_back(i);
    }

    vector<int> ans(n);
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == '<')
        {
            ans[i + 1] = a.front();
            a.pop_front();
        }
        else if (s[i] == '>')
        {
            ans[i + 1] = a.back();
            a.pop_back();
        }
    }
    ans[0] = a.front(); // the last remaining value
    a.pop_front();

    fr(i, n) cout << ans[i] << " "; // +1 for 1-based output
    cout << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
