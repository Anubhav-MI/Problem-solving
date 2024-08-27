#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        if (k == 4)
        {
            int even = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 == 0)
                {
                    even++;
                }
            }
            if (n != 1)
                cout << max(0, 2 - even) << endl;
            else
                cout << a[0] % 4 << endl;
        }
        else
        {
            int mini = INT_MAX;
            int flag = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] % k == 0)
                {
                    flag = 1;
                    break;
                }
                else
                {
                    mini = min(mini, a[i] % k);
                }
            }
            if (flag == 1)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << mini << endl;
            }
        }
    }
    return 0;
}