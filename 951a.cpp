#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int maxi = max(arr[0], arr[1]);
        for (int i = 1; i < n - 1; i++)
        {
            int temp = max(arr[i], arr[i + 1]);
            maxi = min(maxi, temp);
        }
        cout << maxi - 1 << endl;
    }
    return 0;
}