#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int ans = 0;
    int multiplier = 1;

    while (t > 0)
    {
        int d = t % 10;
        if ((9 - d) < d)
        {
            if (!(d == 9 && t / 10 == 0))
            {
                d = 9 - d;
            }
        }

        ans = d * multiplier + ans;
        multiplier *= 10;
        t /= 10;
    }
    cout << ans << endl;
    return 0;
}
