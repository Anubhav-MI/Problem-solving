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
        int longest = 0;
        int cur = 1;
        char prev = s[0];
        for (int i = 1; i < n; i++)
        {
            if (s[i] == prev)
            {
                cur++;
            }
            else
            {
                longest = max(longest, cur);
                cur = 1;
                prev = s[i];
            }
        }
        longest = max(longest, cur);
        cout << longest + 1 << endl;
    }
    return 0;
}
