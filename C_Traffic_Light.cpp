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
        char c;
        cin >> c;
        string s;
        cin >> s;
        s = s + s;
        int count = 0;
        int ans = 0;
        for (int i = 0; i < 2 * n; i++)
        {
            if (i < n && s[i] == c)
            {
                while (s[i] != 'g' && i < 2 * n)
                {
                    i++;
                    count++;
                }
            }
            ans = max(ans, count);
            count = 0;
        }
        cout << ans << endl;
    }

    return 0;
}