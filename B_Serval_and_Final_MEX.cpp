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

int mex(vi v, int i, int j)
{ // minimum excluded number between i and j indices

    set<int> s;
    for (int k = i; k < j; k++)
    {
        s.insert(v[k]);
    }
    for (int k = 0; k < j - i; k++)
    {
        if (s.find(k) == s.end())
            return k;
    }
    return j - i;
}
void solve()
{
    int n = 1, m = 0;
    string s;
    cin >> n;
    vi v(n);
    int zerocount = 0;
    fr(i, n)
    {
        cin >> v[i];
        if (v[i] == 0)
            zerocount++;
    }

    if (zerocount == 0)
    {
        cout << 1 << endl;
        cout << 1 << " " << n << endl;
        return;
    }
    else
    {
        int ans = 0;
        vector<pair<int, int>> p;
        while (v.size() > 0)
        {
            int i = 0;
            while (i < v.size() && v[i] != 0)
                i++;
            if (i == v.size())
            {
                v = {0};
                ans++;
                p.push_back({1, i + 1});
            }
            else
            {
                if (i > 0)
                {
                    ans++;
                    p.push_back({1, i + 1});
                    int x = mex(v, 0, i);
                    for (int i = 0; i <= i; i++)
                    {
                        v.erase(v.begin(), v.begin() + i);
                    }
                    v.push_back(x);
                }
                if (i == 0)
                {
                    ans++;
                    p.push_back({1, i + 1});
                    int x = mex(v, 0, i + 1);
                    for (int i = 0; i <= i + 1; i++)
                    {
                        v.erase(v.begin(), v.begin() + i);
                    }
                    v.push_back(x);
                }
            }
        }
        cout << ans << endl;
        for (auto it : p)
        {
            cout << it.first << " " << it.second << endl;
        }
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
