#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;
        stack<char> st;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(' || st.empty())
            {
                st.push(s[i]);
            }
            else
            {
                if (!st.empty() && st.top() == '(')
                {
                    st.pop();
                }
                else
                {
                    st.push(s[i]);
                }
            }
        }
        if (st.size() % 2 == 0)
        {
            ans = st.size() / 2;
        }
        else
        {
            ans = -1;
        }
        cout << ans << endl;
    }
    return 0;
}