#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

long long modInverse(long long a, long long mod)
{
    long long result = 1, power = mod - 2;
    while (power)
    {
        if (power % 2)
            result = (result * a) % mod;
        a = (a * a) % mod;
        power /= 2;
    }
    return result;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        long long suma = 0, sumsq = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            suma = (suma + x) % MOD;
            sumsq = (sumsq + (x * x) % MOD) % MOD;
        }

        long long sumaSquared = (suma * suma) % MOD;
        long long S = (sumaSquared - sumsq + MOD) % MOD;
        S = (S * modInverse(2, MOD)) % MOD;

        long long numPairs = (n * (n - 1) / 2) % MOD;

        if (numPairs == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            long long numPairsInv = modInverse(numPairs, MOD);
            long long result = (S * numPairsInv) % MOD;
            cout << result << endl;
        }
    }
    return 0;
}
