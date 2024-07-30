#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        set<char> st;
        for (char i = 'a'; i <= 'z'; i++)
        {
            st.insert(i);
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (st.find(s[i]) != st.end())
                st.erase(s[i]);
        }
        if (st.size() == 0)
        {
            // append a to s
            s.push_back('a');
            cout << s << endl;
        }
        else
        {
            vector<char> ans;
            char prev = s[0];
            ans.push_back(s[0]);
            int flag = 0;
            for (int i = 1; i < s.size(); i++)
            {
                if (s[i] == prev && flag == 0)
                {
                    // push first element of set
                    ans.push_back(*st.begin());
                    st.erase(st.begin());
                    ans.push_back(s[i]);
                    prev = ans.back();
                    flag = 1;
                    // i++;
                }
                else
                {
                    ans.push_back(s[i]);
                    prev = s[i];
                }
            }
            if (flag == 0)
            {
                // push first element of set which is not same as last char of ans
                ans.push_back(*st.begin());
            }
            cout << string(ans.begin(), ans.end()) << endl;
        }
    }
    return 0;
}