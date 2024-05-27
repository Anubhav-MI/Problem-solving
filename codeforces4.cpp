#include <iostream>
using namespace std;
int main()
{
    int test;
    cout << "enter test cases" << endl;
    cin >> test;
    while (test)
    {

        int n;
        cout << "enter string length" << endl;
        cin >> n;
        int c = 0;
        string *str = new string[n];
        for (int i = 0; i < n; i++)
        {
            char ch;
            cin >> ch;
            str[i] = ch;
            if (i == 0)
            {
                c++;
            }
            else
            {
                if (str[i - 1] == str[i])
                    continue;
                else
                {
                    c++;
                }
            }
        }

        test--;
        cout << c;
    }

    return 0;
}