#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, t;
        cin >> s >> t;

        if (t.length() > s.length())
        {
            cout << "NO" << endl;
            continue;
        }

        int i = 0, j = 0;
        while (i < s.length() && j < t.length())
        {
            if (s[i] == t[j] || s[i] == '?')
            {
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }

        if (j == t.length())
        {
            cout << "YES" << endl;
            vector<char> ans;
            i = 0;
            j = 0;
            while (i < s.length())
            {
                if (j < t.length() && (s[i] == t[j] || s[i] == '?'))
                {
                    ans.push_back(t[j]);
                    i++;
                    j++;
                }
                else if (s[i] == '?')
                {
                    ans.push_back('a');
                    i++;
                }
                else
                {
                    ans.push_back(s[i]);
                    i++;
                }
            }
            cout << string(ans.begin(), ans.end()) << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
