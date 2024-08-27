#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int ones = 0;
        int zeros = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                ones++;
            }
            else
            {
                zeros++;
            }
        }
        int tlen = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1' && zeros > 0)
            {
                tlen++;
                zeros--;
            }
            else if (s[i] == '0' && ones > 0)
            {
                tlen++;
                ones--;
            }
            else
            {
                break;
            }
        }
        cout << s.length() - tlen << endl;
    }
    return 0;
}