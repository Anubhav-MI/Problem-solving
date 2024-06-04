#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int flag = 0;
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int m;
        cin >> m;
        int d[m];

        // map<int, int> mp;
        for (int i = 0; i < m; i++)
        {
            cin >> d[i];
        }
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                flag = 1;
                while (j < m)
                {
                    if (d[j] == b[i])
                    {
                        flag = 0;
                        j++;
                        continue;
                    }
                    else
                        j++;
                }
            }
        }
        if (flag == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}