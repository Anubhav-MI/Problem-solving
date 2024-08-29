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
        vector<long long> a;
        vector<long long> b;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            b.push_back(x);
        }
        vector<long long> c;
        int i = 1;
        int j = 0;
        int last = a[0];
        c.push_back(a[0]);
        while (i < n || j < n)
        {
            if (i < n && a[i] == last)
            {
                last = a[i];
                c.push_back(a[i]);
                i++;
            }
            else if (j < n && b[j] == last)
            {
                last = b[j];
                c.push_back(b[j]);
                j++;
            }
            else if (i < n)
            {
                last = a[i];
                c.push_back(a[i]);
                i++;
            }
            else if (j < n)
            {
                last = b[j];
                c.push_back(b[j]);
                j++;
            }
        }
        int ans = 0;
        int cnt = 1;
        for (int i = 0; i < (2 * n) - 1; i++)
        {
            if (c[i] == c[i + 1])
                cnt++;
            else
            {
                ans = max(ans, cnt);
                cnt = 1;
            }
        }
        ans = max(ans, cnt);
        cout << ans << endl;
    }
    return 0;
}