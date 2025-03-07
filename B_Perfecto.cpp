#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Function to check if a number is a perfect square
bool isPerfectSquare(int num)
{
    int root = sqrt(num);
    return root * root == num;
}

void generatePermutation(int n)
{
    vector<int> ans(n, 0);
    vector<int> ans2(n, -1);
    for (int i = 0; i < n; i++)
        ans[i] = (i + 1);
    int sum = 0;
    int j = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (isPerfectSquare(sum + ans[j]))
        {
            // cout << "test" << endl;
            swap(ans[j], ans[j + 1]);
            ans2[i] = ans[j];
        }
        else
        {
            ans2[i] = ans[j];
        }
        // cout << ans2[i];
        sum += ans[j];
        j++;
    }
    ans2[n - 1] = ans[j];
    // Print the generated permutation
    for (int i = 0; i < n; i++)
    {
        cout << ans2[i] << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (isPerfectSquare(n * (n + 1) / 2))
            cout << "-1" << endl;
        else
            generatePermutation(n);
    }
    return 0;
}
