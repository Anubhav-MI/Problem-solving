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
        vector<int> a;
        map<int, int> freq;
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
            freq[x]++;
            maxi = max(maxi, freq[x]);
        }
        cout << n - maxi << endl;
    }
    return 0;
}