#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string level;
        cin >> level;
        map<char, int> mp;
        for (char a = 'A'; a <= 'G'; a++)
        {
            mp[a] = 0;
        }
        for (auto it : level)
        {
            mp[it]++;
        }
        // for (auto it : mp)
        // {
        //     cout << it.first << " " << it.second << endl;
        // }
        int count = 0;
        for (auto it : mp)
        {
            if (it.second >= m)
                continue;
            count += m - it.second;
        }
        cout << count << endl;
    }
    return 0;
}