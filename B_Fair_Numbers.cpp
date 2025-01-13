#include <bits/stdc++.h>
using namespace std;

bool isSelfDividing(long long num)
{
    long long temp = num;
    while (temp > 0)
    {
        long long digit = temp % 10;
        if (digit != 0 && num % digit != 0)
        {
            return false;
        }
        temp /= 10;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        while (!isSelfDividing(n))
        {
            n++;
        }
        cout << n << endl;
    }
    return 0;
}
