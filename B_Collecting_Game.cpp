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
        ll a[n];
        ll b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            ll score = b[i];
            int count = 0;
            for (int j = 0; j < n; j++)
            {
                if (score >= b[j] && i != j)
                {
                    score += b[j];
                    count++;
                }
                if (score < b[j] && i != j)
                {
                    break;
                }
            }
            mp[b[i]] = count;
        }
        for (int i = 0; i < n; i++)
        {
            a[i] = mp[a[i]];
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}