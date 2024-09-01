#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        vector<int> ans;
        if (l == r)
        {
            cout << 1 << endl;
            continue;
        }
        if (r - l == 1)
        {
            cout << 2 << endl;
            continue;
        }
        int cnt = 1;
        int temp = l + cnt;
        cnt++;
        while (temp <= r)
        {
            ans.push_back(temp);
            temp += cnt;
            cnt++;
        }
        cout << ans.size() + 1 << endl;
    }
    return 0;
}
