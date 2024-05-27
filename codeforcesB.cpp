#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        vector<char> b;
        for (int i = 0; i < a.length(); i++)
        {
            b.push_back(a[i]);
        }
        sort(b.begin(), b.end());
        vector<char> c;
        c.push_back(b[0]);
        for (int i = 1; i < b.size(); i++)
        {
            if (b[i] != b[i - 1])
                c.push_back(b[i]);
        }

        int i = 0;
        int j = c.size() - 1;
        while (i <= j)
        {
            char x = c[i];
            char y = c[j];
            for (int k = 0; k < a.length(); k++)
            {
                if (a[k] == x)
                    a[k] = y;
                else if (a[k] == y)
                    a[k] = x;
            }
            i++;
            j--;
        }
        cout << a << endl;
    }
    return 0;
}