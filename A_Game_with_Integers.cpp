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
        if (n == 1)
        {
            cout << "First" << endl;
        }
        else if (n % 3 == 0)
        {
            cout << "Second" << endl;
        }
        else if ((n + 1) % 3 == 0 || (n - 1) % 3 == 0)
        {
            cout << "First" << endl;
        }
        else
        {
            cout << "Second" << endl;
        }
    }
    return 0;
}