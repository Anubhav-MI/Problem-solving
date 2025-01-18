#include <bits/stdc++.h>
using namespace std;
#define ll long long
static bool com(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
        return a.second > b.second;
    return a.first < b.first;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        vector<pair<int, int>> ans;
        for (int i = 0; i < n; i++)
        {
            int deg = 0;
            for (int j = 0; j < n; j++)
            {
                if (s[i][j] == '1')
                    deg++;
            }
            ans.push_back({deg, i + 1});
        }
        sort(ans.begin(), ans.end(), com);
        for (int i = 0; i < n; i++)
        {
            cout << ans[i].second << " ";
        }
        cout << endl;
    }
    return 0;
}