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
        string s;
        cin >> s;
        int flag = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (i + 1 < n && i + 2 < n && s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.')
            {
                flag = 1;
                cout << 2 << endl;
                break;
            }
            else
            {
                if (s[i] == '.')
                {
                    cnt++;
                }
            }
        }
        if (flag == 0)
            cout << cnt << endl;
    }
    return 0;
}