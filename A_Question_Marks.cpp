#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        string s;
        cin >> s;
        // long qm =
        long ans = 0;
        map<char, long> mp;
        for (long i = 0; i < 4 * n; i++)
        {
            if (s[i] == '?')
                continue;
            mp[s[i]]++;
        }
        for (auto it : mp)
        {
            if (it.second <= n)
            {
                ans += it.second;
            }
            else
            {
                ans += n;
            }
        }
        cout << ans << endl;
    }

    return 0;
}