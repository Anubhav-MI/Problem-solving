#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int open = 0;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                s[i] = '(';
                open++;
            }
            else if (i % 2 != 0)
            {
                if (s[i] == '(')
                {
                    open++;
                }
                else
                {
                    open--;
                }
            }
            else
            {
                if (open > 0)
                {
                    s[i] = ')';
                    open--;
                }
                else
                {
                    s[i] = '(';
                    open++;
                }
            }
        }
        // cout << s << endl;
        int cost = 0;
        stack<int> tempStack;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                tempStack.push(i);
            }
            else if (s[i] == ')')
            {
                if (!tempStack.empty())
                {
                    int openIndex = tempStack.top();
                    tempStack.pop();
                    cost += i - openIndex;
                }
            }
        }

        cout << cost << endl;
    }

    return 0;
}
