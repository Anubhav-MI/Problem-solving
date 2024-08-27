#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        sort(a.begin(), a.end());
        int maxi = 0;
        int cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] - a[i - 1] <= k)
            {
                cnt++;
            }
            else
            {
                maxi = max(maxi, cnt);
                cnt = 1;
            }
        }
        maxi = max(maxi, cnt);
        cout << n - maxi << endl;
    }
    return 0;
}