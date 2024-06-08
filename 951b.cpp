#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int val = a ^ b;
        int cnt = 0;
        while ((val & 1) == 0)
        {
            cnt++;
            val = val >> 1;
        }
        cout << (1 << cnt) << endl;
    }
    return 0;
}