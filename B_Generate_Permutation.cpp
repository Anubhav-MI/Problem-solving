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
        if (n % 2 == 0)
        {
            cout << -1 << endl;
            continue;
        }
        else
        {
            int it = 1;
            vector<int> p(n, -1);
            for (int i = n / 2; i < n; i++)
            {
                p[i] = it;
                it++;
            }
            for (int i = n / 2 - 1; i >= 0; i--)
            {
                p[i] = it;
                it++;
            }
            for (int i = 0; i < n; i++)
            {
                cout << p[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}