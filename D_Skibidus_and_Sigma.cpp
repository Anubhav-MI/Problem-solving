// JAI BAJARANGABALI
#include "bits/stdc++.h"
#define int long long
#define uint unsigned long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vvb vector<vb>
#define fr(i, n) for (int i = 0; i < (n); i++)
#define rep(i, a, n) for (int i = (a); i <= (n); i++)
#define nl cout << "\n"
#define dbg(var) cout << #var << "=" << var << " "
#define all(v) v.begin(), v.end()
#define sz(v) (int)(v.size())
#define srt(v) sort(v.begin(), v.end())         // sort
#define mxe(v) *max_element(v.begin(), v.end()) // find max element in vector
#define mne(v) *min_element(v.begin(), v.end()) // find min element in vector
#define unq(v) v.resize(distance(v.begin(), unique(v.begin(), v.end())));
// make sure to sort before applying unique // else only consecutive duplicates would be removed
using namespace std;
int MOD = 1e9 + 7; // Hardcoded, directly change from here for functions!

// ===================================END Of the input module ==========================================

bool comp(vector<int> &a, vector<int> &b)
{
}
void solve()
{
    int n = 1, m = 0;
    string s;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    fr(i, n) fr(j, m) cin >> v[i][j];
    sort(v.begin(), v.end()), comp;
}
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
