#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, m;
        cin >> n >> s >> m;
        vector<pair<int, int>> tasks(n);

        for (int i = 0; i < n; i++)
        {
            cin >> tasks[i].first >> tasks[i].second;
        }

        // Sort tasks by their start time
        sort(tasks.begin(), tasks.end());

        // Check the gap before the first task
        if (tasks[0].first >= s)
        {
            cout << "YES" << endl;
            continue;
        }

        // Check gaps between tasks
        bool can_shower = false;
        for (int i = 1; i < n; i++)
        {
            if (tasks[i].first - tasks[i - 1].second >= s)
            {
                can_shower = true;
                break;
            }
        }

        // Check the gap after the last task
        if (m - tasks[n - 1].second >= s)
        {
            can_shower = true;
        }

        if (can_shower)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
