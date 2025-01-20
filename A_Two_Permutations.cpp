#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        if (a + b + 2 <= n || (a == b && b == n))
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}