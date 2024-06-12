
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
        int maxi = INT_MIN;
        int sum = 0;
        int ans = 0;
        vector<int> arr;
        while (n != 0)
        {
            int x;
            cin >> x;
            sum += x;
            maxi = max(maxi, x);
            if (maxi == sum - maxi)
                ans++;
            n--;
        }

        cout << ans << endl;
    }
    return 0;
}