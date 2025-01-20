#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;
        if (n == 1)
            cout << "0" << endl;
        while (n != 1)
        {
            while (n % 6 == 0 && n > 0)
            {
                n = n / 6;
                count++;
            }
            if (n == 1)
            {
                cout << count << endl;
                break;
            }
            n = n * 2;
            count++;
            if ((n % 6 != 0))
            {
                cout << "-1" << endl;
                break;
            }
        }
    }
    return 0;
}