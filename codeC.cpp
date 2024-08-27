#include <iostream>
#include <vector>
#include <map>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int findLCM(int a, int b)
{
    return (a * b) / gcd(a, b);
}
int solve(vector<int> a, int i, int j, map<int, int> mp)
{
    int lcm = findLCM(a[i], a[i + 1]);
    for (int k = i + 2; k <= j; k++)
    {
        lcm = findLCM(lcm, a[k]);
    }
    cout << lcm << endl;
    if (mp.find(lcm) == mp.end())
    {
        return j - i;
    }
    else
        return -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[a[i]]++;
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                ans = max(ans, solve(a, i, j, mp));
            }
        }
        cout << ans << endl;
    }
    return 0;
}