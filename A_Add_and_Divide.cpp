#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int count = 0;
        while (a > b && a != 0)
        {
            a = a / b;
            count++;
        }
        if (a == b)
            count++;
        cout << count << endl;
    }
    return 0;
}