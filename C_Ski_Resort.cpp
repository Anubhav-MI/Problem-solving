#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, q;
        cin >> n >> k >> q;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        long long len = 0;
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= q)
                len += 1;
            else
            {
                if (len >= k)
                    ans += (len - k + 1) * (len - k + 2) / 2;
                len = 0;
            }
        }
        if (len >= k)
            ans += (len - k + 1) * (len - k + 2) / 2;
        cout << ans << endl;
    }
    return 0;
}