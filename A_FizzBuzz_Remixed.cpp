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
    int ans = (n / 15) * 3 + min((n % 15 + 1), 3);
    cout << ans << "\n";
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
