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
        vector<long long> a(n);
        long long maxi = INT_MIN;
        long long mini = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            maxi = max(maxi, a[i]);
            mini = min(mini, a[i]);
        }
        // cout << maxi << " " << mini << endl;
        long long ans = (n - 1) * (maxi - mini);
        cout << ans << endl;
    }
    return 0;
}
