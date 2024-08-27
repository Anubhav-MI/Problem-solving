#include <iostream>
using namespace std;

void solver()
{
    int n, k;
    cin >> n >> k;
    int a = n, b = n - 1;
    int ans = 0;

    while (k > 0)
    {
        k -= a;
        ans += 1;

        // Update a and b similarly to the Python version
        int temp = a;
        a = b;
        b = (temp != b) ? b : b - 1;
    }

    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solver();
    }
    return 0;
}
