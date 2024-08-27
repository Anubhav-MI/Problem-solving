#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int xk, yk;
        cin >> xk >> yk;
        int xq, yq;
        cin >> xq >> yq;
        map<pair<int, int>, int> mp;
        int row[] = {-b, -b, -a, a, b, b, -a, a};
        int col[] = {-a, a, b, b, -a, a, -b, -b};
        for (int i = 0; i < 8; i++)
        {
            int x = xk + row[i];
            int y = yk + col[i];
            mp[{x, y}]++;
        }
        int ans = 0;
        for (int i = 0; i < 8; i++)
        {
            int x = xq + row[i];
            int y = yq + col[i];
            mp[{x, y}]++;
            if (mp[{x, y}] == 2)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}