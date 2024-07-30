#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<char>> nums(2, vector<char>(n));
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> nums[i][j];
            }
        }

        if (n < 3)
        {
            cout << 0 << endl;
            continue;
        }

        int ans = 0;
        for (int i = 1; i < n - 1; i++)
        {
            if (nums[0][i - 1] == 'x' && nums[0][i] == '.' && nums[0][i + 1] == 'x' &&
                nums[1][i - 1] == '.' && nums[1][i] == '.' && nums[1][i + 1] == '.')
            {
                ans++;
            }
            if (nums[1][i - 1] == 'x' && nums[1][i] == '.' && nums[1][i + 1] == 'x' &&
                nums[0][i - 1] == '.' && nums[0][i] == '.' && nums[0][i + 1] == '.')
            {
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
