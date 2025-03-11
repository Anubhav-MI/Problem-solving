#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Anunode
{
    int val;
    Anunode *next;
    Anunode(int v)
    {
        val = v;
        next = NULL;
    }
};

void solve()
{
    int n;
    cin >> n;
    vector<int> a(2 * n, -1);
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int even = 0, odd = 0;
    for (int i = 0; i < 2 * n; i++)
    {
        if (i % 2)
            odd += a[i];
        else
            even += a[i];
    }
    int val = even - odd;
    vector<int> ans(2 * n + 1, -1);
    int i = 0, j = 1;
    int t = 1;
    ans.push_back(val);
    for (int k = 1; k < 2 * n + 1; k++)
    {
        if (t == 0)
        {
            ans[k] = a[i];
            i += 2;
            t = 1;
        }
        else
        {
            t = 0;
            ans[k] = a[j];
            j += 2;
        }
    }
    for (auto it : ans)
        cout << it << " ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
