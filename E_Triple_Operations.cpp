#include <bits/stdc++.h>
using namespace std;
int calc(int n)
{
    if (n < 3)
        return 1;
    return 1 + calc(n / 3);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        vector<int> a(3e5, 0);
        a[1] = 1;
        for (int i = 2; i < 3e5; i++)
        {
            a[i] = a[i - 1] + calc(i);
        }
        int ans = calc(l) * 2 + a[r] - a[l];
        cout << ans << endl;
    }
    return 0;
}
