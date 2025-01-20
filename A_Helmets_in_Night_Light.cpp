#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, p;
        cin >> n >> p;
        ll tp = p;
        ll tn = n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<ll> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for (int i = 0; i < n; i++)
        {
            pq.push({b[i], a[i]});
        }
        pq.push({tp, n + 1});
        n--;
        while (n != 0 && !pq.empty())
        {
            ll num = pq.top().second;
            ll cost = pq.top().first;
            // cout << num << " " << cost << endl;
            pq.pop();

            if (num > n)
            {
                p += n * cost;
                n = 0;
                break;
            }
            else
            {
                p += num * cost;
                n -= num;
            }
        }

        cout << p << endl;
    }
    return 0;
}