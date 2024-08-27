#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        double ans = floor(log2(r));
        cout << ans << endl;
    }
    return 0;
}