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
        string s;
        cin >> s;
        int sq = sqrt(n);
        bool flag = true;

        if (sq * sq == n)
        {
            for (int i = 1; i <= sq; i++)
            {
                for (int j = 1; j <= sq; j++)
                {
                    int ind = (i - 1) * sq + (j - 1);

                    if (i == 1 || j == 1 || i == sq || j == sq)
                    {
                        if (s[ind] == '0')
                        {
                            cout << "NO" << endl;
                            flag = false;
                            break;
                        }
                    }

                    else
                    {
                        if (s[ind] == '1')
                        {
                            cout << "NO" << endl;
                            flag = false;
                            break;
                        }
                    }
                }
                if (!flag)
                    break;
            }
            if (flag)
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
