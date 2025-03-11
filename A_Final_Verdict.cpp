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
    int n, x;
    cin >> n >> x;
    vector<int> a(n, 0);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (sum == n * x)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
