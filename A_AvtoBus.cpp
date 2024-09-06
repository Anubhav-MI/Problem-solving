#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (n % 4 != 0 && n % 6 != 0)
        {
            cout << -1 << endl;
            continue;
        }
        else
        {
            long long int mini = n / 6;
            if (n % 6 != 0)
                mini += 1;
            cout << mini << " " << n / 4 << endl;
        }
    }
    return 0;
}
