#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
ll countSubarrays(ll length)
{
    return (length * (length + 1)) / 2;
}

ll maxSubarraysWithZero(vector<int> &a, int n)
{
    ll totalSubarrays = countSubarrays(n);
    ll onesCount = 0, maxOnes = 0;
    ll onlyOnesSubarrays = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            onesCount++;
        }
        else
        {
            onlyOnesSubarrays += countSubarrays(onesCount);
            maxOnes = max(maxOnes, onesCount);
            onesCount = 0;
        }
    }
    onlyOnesSubarrays += countSubarrays(onesCount);
    maxOnes = max(maxOnes, onesCount);
    onlyOnesSubarrays -= countSubarrays(maxOnes);
    onlyOnesSubarrays += countSubarrays(maxOnes - 1);
    return totalSubarrays - onlyOnesSubarrays;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << maxSubarraysWithZero(a, n) << endl;
    return 0;
}
