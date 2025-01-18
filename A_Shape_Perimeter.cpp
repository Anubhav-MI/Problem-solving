#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            cin >> b[i];
        }
        int sum = 0;
        int startx = a[0];
        int starty = b[0];

        for (int i = 1; i < n; i++)
        {
            sum += ((startx + m) - (startx + a[i]) + starty + m - (starty + b[i])) * 2;
            startx += a[i];
            starty += b[i];
        }
        cout << (n * 4 * m) - sum << endl;
    }
    return 0;
}