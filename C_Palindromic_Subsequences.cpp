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
        vector<int> ans;
        ans.push_back(1);
        ans.push_back(1);
        for (int i = 2; i <= n - 3; i++)
        {
            ans.push_back(i);
        }
        ans.push_back(1);
        ans.push_back(2);
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}