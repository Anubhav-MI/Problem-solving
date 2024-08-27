#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (n == m)
            cout << "YES";
        else if (m > n)
            cout << "NO";
        else
        {
            if ((m + n) % 2 == 0)
                cout << "YES";
            else
                cout << "NO";
        }
    }
    return 0;
}