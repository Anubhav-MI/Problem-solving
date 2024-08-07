#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> a(2);
        vector<int> b(2);
        cin >> a[0] >> a[1] >> b[0] >> b[1];
        int win = 0;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                int win1 = 0;
                int win2 = 0;
                if (a[i] > b[j])
                    win1++;
                else if (a[i] < b[j])
                    win2++;
                if (a[1 - i] > b[1 - j])
                    win1++;
                else if (a[1 - i] < b[1 - j])
                    win2++;
                if (win1 > win2)
                    win++;
            }
        }
        cout << win << endl;
    }

    return 0;
}