#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll findMedian(vector<ll> &v)
{
    int n = v.size();
    sort(v.begin(), v.end());
    if (n % 2 == 1)
    {
        return v[n / 2];
    }
    else
    {
        return v[n / 2 - 1];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<ll> a(n), b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        vector<int> candidates;
        for (int i = 0; i < n; i++)
        {
            if (b[i] == 1)
            {
                candidates.push_back(i);
            }
        }

        // Sort candidates based on their values in a[] (descending)
        sort(candidates.begin(), candidates.end(), [&](int x, int y)
             { return a[x] > a[y]; });

        // Distribute k increments optimally
        for (int i = 0; i < candidates.size() && k > 0; i++)
        {
            int index = candidates[i];
            int add = min(k, k); // Maximum increment allowed for this index
            a[index] += add;
            k -= add;
        }

        ll maxScore = LLONG_MIN;

        // Calculate max score by considering each element and removing it to find the median of the rest
        for (int i = 0; i < n; i++)
        {
            vector<ll> c = a;
            c.erase(c.begin() + i);
            ll median = findMedian(c);
            maxScore = max(maxScore, a[i] + median);
        }

        cout << maxScore << endl;
    }

    return 0;
}
