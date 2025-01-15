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
        int a[n][m];
        int count = 0;
        int mini = INT_MAX;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                sum += abs(a[i][j]);
                if (abs(a[i][j]) < mini)
                {
                    mini = abs(a[i][j]);
                }

                if (a[i][j] < 0)
                {
                    count++;
                }
            }
        }
        if (count & 1)
        {
            cout << sum - (mini * 2) << endl;
        }
        else
        {
            cout << sum << endl;
        }
    }

    return 0;
}