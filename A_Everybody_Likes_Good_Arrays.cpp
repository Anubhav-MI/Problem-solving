#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = 0;
        int flag = 1;
        int j = 0;
        while (flag)
        {
            flag = 0;
            for (int i = j; i < n - 1; i++)
            {
                if ((a[i] % 2 == 0 && a[i + 1] % 2 == 0) || (a[i] % 2 != 0 && a[i + 1] % 2 != 0))
                {
                    flag = 1;
                    ans++;
                    a[i + 1] = a[i] * a[i + 1];
                    j = i + 1;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}