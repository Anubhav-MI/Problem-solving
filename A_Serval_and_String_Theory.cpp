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

// Function to return a reversed copy of string
string reverseString(const string &s)
{
    string rs = s;
    int n = rs.size();
    for (int i = 0; i < n / 2; i++)
    {
        swap(rs[i], rs[n - i - 1]);
    }
    return rs;
}

void solve()
{
    int n, k;
    string s;
    cin >> n >> k;
    cin >> s;

    if (n == 1)
    {
        cout << "NO" << endl;
        return;
    }

    string rs = reverseString(s);
    if (s < rs)
    {
        cout << "YES" << endl;
        return;
    }
    set<char> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(s[i]);
    }
    if (st.size() != 1 && k > 0)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
