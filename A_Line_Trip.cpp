#include <bits/stdc++.h>
using namespace std;

bool check(int val, int x, set<int> &st)
{
    int cap = val;
    for (int i = 1; i < x; i++)
    {
        if (st.find(i) == st.end())
        {
            cap--;
        }
        else
        {
            cap = val;
        }
        if (cap == 0)
        {
            return false;
        }
    }
    for (int i = x; i >= 1; i--)
    {
        if (st.find(i) == st.end())
        {
            cap--;
        }
        else
        {
            cap = val;
        }
        if (cap == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            st.insert(a);
        }

        int s = 1;
        int e = x;
        int result = 0;

        while (s <= e)
        {
            int mid = (s + e) / 2;
            if (check(mid, x, st))
            {
                result = mid;
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }

        cout << result << endl;
    }
    return 0;
}
