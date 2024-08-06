#include <bits/stdc++.h>
using namespace std;
#define ll long long
int solve(vector<int> &alloc, int ind, int books)
{
    if (books == 0)
        return 1;
    int take = solve(alloc, ind, books--);
    int nott = 1 + solve(alloc, ind + 1, books--);
    return take + nott;
}
int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> A(n);
    vector<int> alloc(n, 0);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        alloc[i] = A[i];
        sum += A[i];
    }
    int ans = solve(alloc, 0, k - sum);
    cout << ans;
    return 0;
}