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
        int b[n];
        int count = 0;
        int dif = 0;
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] - a[i] > 0)
            {
                count++;
                if (count == 2)
                {
                    flag = 0;
                    break;
                }
                dif = b[i] - a[i];
            }
            else if (b[i] - a[i] <= 0)
            {
                if (a[i] - b[i] < dif)
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}