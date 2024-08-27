#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, n;
        cin >> a >> b >> n;
        vector<long long> time;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            time.push_back(x);
        }
        int i = 0;
        long long ans = b;
        while (i < n)
        {
            if (time[i] < a)
            {
                ans += time[i];
            }
            else
            {
                ans += a - 1;
            }
            i++;
        }
        cout << ans << endl;
    }
    return 0;
}