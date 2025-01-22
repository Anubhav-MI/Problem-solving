#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool check(int i)
{
    int cnt = 0;
    while (i)
    {
        if (i % 10 != 0)
        {
            cnt++;
        }
        if (cnt > 1)
        {
            return false;
        }
        i /= 10;
    }
    return true;
}

int main()
{
    set<int> s;
    for (int i = 1; i <= 999999; i++)
    {
        if (check(i))
        {
            s.insert(i);
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0;
        for (auto it : s)
            if (it <= n)
                ans++;
        cout << ans << endl;
    }
    return 0;
}