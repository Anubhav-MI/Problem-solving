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

        vector<int> a(n);
        map<int, int> mp;
        int maxi = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
            maxi = max(maxi, mp[a[i]]);
        }
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }

        int ans = 0;
        while (maxi != n)
        {
            ans += 1 + min(maxi, n - maxi);
            maxi += min(n - maxi, maxi);
            // cout << maxi << " " << ans << endl;
        }
        cout << ans << endl;
    }
    return 0;
}
