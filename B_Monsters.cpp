#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a;
        priority_queue<int> q;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
            q.push(x);
        }
        int cnt = 0;
        vector<int> ans;
        while (cnt != n)
        {
            int maxi = q.top();
            q.pop();
            for (int i = 0; i < n; i++)
            {
                if (a[i] == maxi)
                {
                    a[i] = a[i] - k;
                    if (a[i] <= 0)
                    {
                        cnt++;
                        ans.push_back(i + 1);
                    }
                    else
                    {
                        q.push(a[i]);
                    }
                }
            }
        }
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}