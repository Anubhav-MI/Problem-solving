#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        priority_queue<int> pq;
        for (int i = 0; i < 3; i++)
        {
            int n;
            cin >> n;
            if (n > 0)
            {
                pq.push(n);
            }
        }
        int res = 0;
        while (pq.size() > 1)
        {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            a--;
            b--;
            res++;
            if (a > 0)
                pq.push(a);
            if (b > 0)
                pq.push(b);
        }
        if (pq.size() && pq.top() % 2)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << res << endl;
        }
    }
    return 0;
}
