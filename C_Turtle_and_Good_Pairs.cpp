#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        string ans = "";
        while (n > 0)
        {
            for (auto it : mp)
            {
                if (it.second > 0)
                {
                    ans += it.first;
                    mp[it.first]--;
                    n--;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}