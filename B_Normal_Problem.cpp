#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        map<char, char> mp{{'p', 'q'}, {'q', 'p'}, {'w', 'w'}};
        string b;
        for (auto i : a)
        {
            b += mp[i];
        }
        reverse(b.begin(), b.end());
        cout << b << endl;
    }
    return 0;
}