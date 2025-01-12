#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long ans = 0;
        if (a < b)
        {
            while (a < b)
            {
                if (a * 8 <= b)
                {
                    a *= 8;
                }
                else if (a * 4 <= b)
                {
                    a *= 4;
                }
                else if (a * 2 <= b)
                {
                    a *= 2;
                }
                else
                {
                    break;
                }
                ans++;
            }
        }
        else if (a > b)
        {
            while (a > b)
            {
                if (a % 8 == 0 && a / 8 >= b)
                {
                    a /= 8;
                }
                else if (a % 4 == 0 && a / 4 >= b)
                {
                    a /= 4;
                }
                else if (a % 2 == 0 && a / 2 >= b)
                {
                    a /= 2;
                }
                else
                {
                    break;
                }
                ans++;
            }
        }
        if (a == b)
        {
            cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}