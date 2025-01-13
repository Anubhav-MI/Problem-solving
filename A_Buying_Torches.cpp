#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int x, y, k;
        cin >> x >> y >> k;
        long long int req = (k + k * y - 1);
        long long ans = 0;
        if (req % (x - 1) == 0)
            ans = req / (x - 1) + k;
        else
            ans = req / (x - 1) + k + 1;
        cout << ans << endl;
    }
    return 0;
}