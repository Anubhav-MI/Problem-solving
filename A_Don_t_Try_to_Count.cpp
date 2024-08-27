#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x;
        cin >> s;
        int c = 0;
        int flag = 0;
        while (c <= 5)
        {
            if (x.find(s) != string::npos)
            {
                cout << c << endl;
                flag = 1;
                break;
            }
            else
            {
                x = x + x;
            }
            c++;
        }
        if (flag == 0)
            cout << -1 << endl;
    }
    return 0;
}