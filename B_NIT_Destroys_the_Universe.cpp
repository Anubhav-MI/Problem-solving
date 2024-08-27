#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int flag = 0;
        int l = -1, r = -1;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                flag++;
            }
            else
            {
                if (l == -1)
                    l = i;
                r = i;
            }
        }
        if (flag == n)
        {
            cout << 0 << endl;
            continue;
        }
        int flag1 = 0;
        for (int i = l; i <= r; i++)
        {
            if (a[i] == 0)
            {
                cout << 2 << endl;
                flag1 = 1;
                break;
            }
        }
        if (flag1 == 0)
        {
            cout << 1 << endl;
        }
    }
    return 0;
}