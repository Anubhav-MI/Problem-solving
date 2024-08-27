#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        long long mex = INT_MIN;
        while (n--)
        {
            int l;
            cin >> l;
            set<long long> st;
            for (int i = 0; i < l; i++)
            {
                long long x;
                cin >> x;
                st.insert(x);
            }
            int y = 0;
            long long j = 0;
            while (true)
            {
                if (st.find(j) == st.end())
                {
                    if (y == 0)
                        y = 1;
                    else
                    {
                        mex = max(mex, j);
                        break;
                    }
                }
                j++;
            }
        }
        if (mex >= m)
            cout << (m + 1) * mex << endl;
        else
            cout << (mex + 1) * mex + (m * (m + 1) / 2 - mex * (mex + 1) / 2) << endl;
    }
    return 0;
}