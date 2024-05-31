#include <iostream>
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
        char prev = s[0];
        int flag = 0;
        for (int i = 1; i < n; i++)
        {
            char ch = s[i];
            if (ch >= '0' && ch <= '9')
            {
                if (prev >= 'a' && prev <= 'z')
                {
                    flag = 1;
                    cout << "NO" << endl;
                    break;
                }
                else if (ch >= prev)
                {
                    prev = ch;
                }
                else
                {
                    flag = 1;
                    cout << "NO" << endl;
                    break;
                }
            }
            else
            {
                if (prev <= ch)
                {
                    prev = ch;
                }
                else
                {
                    flag = 1;
                    cout << "NO" << endl;
                    break;
                }
            }
        }
        if (flag == 0)
            cout << "YES" << endl;
    }
    return 0;
};