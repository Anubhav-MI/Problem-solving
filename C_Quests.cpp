#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        set<int> st;
        priority_queue<int> pq;
        long long ans = 0;
        ans += a[0];
        st.insert(b[0]);
        pq.push(b[0]);
        int i = 1;
        k = k - 1;
        while (k != 0 && i < n)
        {
            if (a[i] < pq.top())
            {
                ans += pq.top();
            }
            else
            {
                ans += a[i];
                if (st.find(b[i]) == st.end())
                {
                    pq.push(b[i]);
                    st.insert(b[i]);
                }
                i++;
            }
            k--;
        }
        while (k != 0)
        {
            ans += pq.top();
            k--;
        }
        cout << ans << endl;
    }

    return 0;
}