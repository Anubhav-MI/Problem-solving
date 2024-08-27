#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int ans = INT_MAX;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        ans = min(ans, abs(x - 0));
    }
    cout << ans << endl;
    return 0;
}