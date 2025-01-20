#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<string> v;
        for (int i = 0; i < 10; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        int n = 9;
        int ans = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (v[i][j] == 'X')
                {
                    if (i == 0 || j == 0 || i == 9 || j == 9)
                        ans++;
                    if (((i == 1 || i == 8) && (j >= 1 && j < 9)) || (j == 1 || j == 8) && (i >= 1 && i < 9))
                    {
                        ans += 2;
                    }
                    if (((i == 2 || i == 7) && (j >= 2 && j < 8)) || (j == 2 || j == 7) && (i >= 2 && i < 8))
                    {
                        ans += 3;
                    }
                    if (((i == 3 || i == 6) && (j >= 3 && j < 7)) || (j == 3 || j == 6) && (i >= 3 && i < 7))
                    {
                        ans += 4;
                    }
                    if ((i == 4 || i == 5) && (j == 4 || j == 5))
                    {
                        ans += 5;
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}