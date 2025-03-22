#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maximize_friends(int n, vector<int> &a, vector<int> &b, vector<int> &c)
{
    // Pair each value with its day index
    vector<pair<int, int>> a_days, b_days, c_days;
    for (int i = 0; i < n; ++i)
    {
        a_days.push_back({a[i], i});
        b_days.push_back({b[i], i});
        c_days.push_back({c[i], i});
    }

    // Sort in descending order
    sort(a_days.rbegin(), a_days.rend());
    sort(b_days.rbegin(), b_days.rend());
    sort(c_days.rbegin(), c_days.rend());

    // Select top 3 days for each activity
    vector<pair<int, int>> a_top(a_days.begin(), a_days.begin() + min(3, n));
    vector<pair<int, int>> b_top(b_days.begin(), b_days.begin() + min(3, n));
    vector<pair<int, int>> c_top(c_days.begin(), c_days.begin() + min(3, n));

    int max_sum = 0;

    // Iterate through all combinations
    for (auto &ax : a_top)
    {
        for (auto &by : b_top)
        {
            for (auto &cz : c_top)
            {
                if (ax.second != by.second && by.second != cz.second && ax.second != cz.second)
                {
                    int current_sum = ax.first + by.first + cz.first;
                    if (current_sum > max_sum)
                    {
                        max_sum = current_sum;
                    }
                }
            }
        }
    }

    cout << max_sum << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n), c(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        maximize_friends(n, a, b, c);

        // Output: 110
    }
    return 0;
}