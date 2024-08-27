#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    long n;
    // cout << "Enter array length" << endl;
    cin >> n;
    vector<long> arr(n);
    // cout << "enter values" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    cout << arr[n - 1] - arr[n - 2];
    return 0;
}