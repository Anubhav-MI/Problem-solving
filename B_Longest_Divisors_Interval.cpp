#include <iostream>
typedef long long ll;

int main()
{

    long t;
    std::cin >> t;
    while (t--)
    {
        ll n;
        std::cin >> n;
        ll cnt = 1;
        for (ll p = 2; n % p == 0 && p <= n; p++)
        {
            ++cnt;
        }
        std::cout << cnt << std::endl;
    }

    return 0;
}
