#include "bits/stdc++.h"
#define int long long
#define vi vector<int>
#define fr(i, n) for (int i = 0; i < (n); i++)
using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;

    vi deck(n);
    vi qr(q);

    fr(i, n) cin >> deck[i];
    fr(i, q) cin >> qr[i];

    vi ans;
    for (int i = 0; i < q; i++)
    {
        auto it = find(deck.begin(), deck.end(), qr[i]); // Use find instead of lower_bound
        if (it == deck.end())
            continue; // If element is not found, skip

        int index = it - deck.begin(); // Store the original index
        ans.push_back(index);

        // Move the found element to the front
        deck.erase(it);
        deck.insert(deck.begin(), qr[i]);
    }

    for (auto x : ans)
    {
        cout << x + 1 << " "; // 1-based index
    }
    cout << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
