
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
        long long maxi = -1;
        long long sum = 0;
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            sum += x;
            maxi = max(maxi, x);
            if (sum - maxi == maxi)
                ans++;
        }

        cout << ans << endl;
    }
    return 0;
}