#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> A(n);
        vector<ll> odd, even;

        // Separate odd and even numbers
        for (ll i = 0; i < n; i++)
        {
            cin >> A[i];
            if (A[i] % 2 == 0)
                even.push_back(A[i]);
            else
                odd.push_back(A[i]);
        }

        // If all numbers are odd or even
        if (odd.empty() || even.empty())
        {
            cout << 0 << endl;
            continue;
        }

        // Sort vectors
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());

        // Use two heaps to simulate the merging
        priority_queue<ll> odd_max_heap(odd.begin(), odd.end());
        priority_queue<ll, vector<ll>, greater<ll>> even_min_heap(even.begin(), even.end());

        priority_queue<ll> temp = odd_max_heap;
        priority_queue<ll> temp2(even.begin(), even.end());
        ll ans = 0;

        // Process the merging using heaps
        while (!even_min_heap.empty() && !odd_max_heap.empty())
        {
            ll o = odd_max_heap.top();
            ll e = even_min_heap.top();
            ans++;

            if (o > e)
            {
                odd_max_heap.pop();
                odd_max_heap.push(o + e);
                even_min_heap.pop();
            }
            else
            {
                odd_max_heap.pop();
                odd_max_heap.push(o + e);
                // even_min_heap.pop();
            }
        }
        long long ans2 = 0;
        while (!temp2.empty() && !temp.empty())
        {
            ll o = temp.top();
            ll e = temp2.top();
            ans2++;

            if (o > e)
            {
                temp.pop();
                temp.push(o + e);
                temp2.pop();
            }
            else
            {
                temp.pop();
                temp.push(o + e);
                // even_min_heap.pop();
            }
        }

        // Result
        ans = ans > ans2 ? ans2 : ans;
        cout << ans << endl;
    }
    return 0;
}
