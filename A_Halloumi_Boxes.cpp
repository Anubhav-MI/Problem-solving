#include <bits/stdc++.h>
using namespace std;

void solver()
{
    int n, k;
    cin >> n >> k;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    if (k > 1)
    {
        cout << "YES" << endl;
        return;
    }
    else if (k == 1)
    {
        for (int i = 1; i < n; i++)
        {
            if (a[i - 1] > a[i])
            {
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
    }
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solver();
    }
    return 0;
}
