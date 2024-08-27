#include <bits/stdc++.h>
using namespace std;

int minScreens(int x, int y)
{
    const int r = 5;
    const int c = 3;
    const int cells = r * c;
    const int cells2x2 = 4;

    int max2x2 = (r / 2) * (c / 2);
    int s2x2 = (y + max2x2 - 1) / max2x2;
    int used2x2 = y * cells2x2;

    int remCells = s2x2 * cells - used2x2;
    int rem1x1 = x - remCells;
    int s1x1 = (rem1x1 > 0) ? (rem1x1 + cells - 1) / cells : 0;

    return s2x2 + s1x1;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        cout << minScreens(x, y) << endl;
    }

    return 0;
}