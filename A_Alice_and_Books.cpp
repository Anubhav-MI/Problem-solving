#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int maxi = INT_MIN;
        // int index = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > maxi && i != n - 1)
            {
                maxi = arr[i];
                // index = i;
            }
        }

        int ans = arr[n - 1] + maxi;
        cout << ans << endl;
    }

    return 0;
}