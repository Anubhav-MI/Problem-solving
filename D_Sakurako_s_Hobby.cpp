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
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        string s;
        cin >> s;
        for (int i = 1; i <= n; i++)
        {
            int ans = 0;
            map<int, int> mp;
            mp[a[i]]++;
            while (a[i] != i)
            {
            }
        }
    }
    return 0;
}
