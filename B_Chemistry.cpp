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
        string s;
        cin >> s;
        if ((n == 1 && k == 0) || (n == 2 && k == 1))
        {
            cout << "YES" << endl;
            continue;
        }
        map<char, int> freq;
        for (int i = 0; i < n; i++)
        {
            freq[s[i]]++;
        }
        int odd = 0, even = 0;
        for (auto i : freq)
        {
            if (i.second % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if (odd <= k + 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}