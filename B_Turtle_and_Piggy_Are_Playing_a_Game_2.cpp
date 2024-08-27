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
        priority_queue<int> maxi;
        priority_queue<int, vector<int>, greater<int>> mini;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mini.push(x);
            maxi.push(x);
            mp[x]++;
        }
        int turn = 1;
        while (n-- > 1)
        {
            if (turn == 1)
            {
                mp[mini.top()]--;
                mini.pop();
                turn = 0;
            }
            else
            {
                mp[maxi.top()]--;
                maxi.pop();
                turn = 1;
            }
        }
        for (auto it : mp)
        {
            if (it.second > 0)
            {
                cout << it.first << endl;
                break;
            }
        }
    }
    return 0;
}