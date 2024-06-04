#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, f, k;
        cin >> n >> f >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int fav = arr[f - 1];
        // sort in descending order using stl
        sort(arr, arr + n, greater<int>());
        int i = k - 1;
        if (arr[i] > fav)
            cout << "NO" << endl;
        else if ((arr[i] == fav && i + 1 < n && arr[i + 1] < fav) || arr[i] < fav || (i + 1 >= n && arr[i] == fav))
            cout << "YES" << endl;
        else
            cout << "MAYBE" << endl;
    }
    return 0;
}