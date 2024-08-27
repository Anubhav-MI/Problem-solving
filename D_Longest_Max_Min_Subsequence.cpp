
#include <bits/stdc++.h>
using namespace std;

// Function to generate all non-empty subsequences without duplicates
void generateSubsequences(vector<int> &a, vector<vector<int>> &subsequences, vector<int> &current, int index)
{
    if (index == a.size())
    {
        if (!current.empty())
        {
            subsequences.push_back(current);
        }
        return;
    }

    // Include the current element
    current.push_back(a[index]);
    generateSubsequences(a, subsequences, current, index + 1);
    current.pop_back(); // Backtrack

    // Skip the current element
    generateSubsequences(a, subsequences, current, index + 1);
}

// Function to transform the subsequence by multiplying odd indexed elements by -1
vector<int> transformSubsequence(const vector<int> &subsequence)
{
    vector<int> transformed = subsequence;
    for (int i = 0; i < transformed.size(); i++)
    {
        if (i % 2 == 0)
        {
            transformed[i] *= -1;
        }
    }
    return transformed;
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
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        vector<vector<int>> subsequences;
        vector<int> current;
        generateSubsequences(a, subsequences, current, 0);

        // Find the longest length
        int maxLength = 0;
        for (const auto &subseq : subsequences)
        {
            maxLength = max(maxLength, (int)subseq.size());
        }

        // Filter out only the longest subsequences
        vector<vector<int>> longestSubsequences;
        for (const auto &subseq : subsequences)
        {
            if (subseq.size() == maxLength)
            {
                longestSubsequences.push_back(subseq);
            }
        }

        // Find the lexicographically smallest transformed subsequence
        vector<int> best = transformSubsequence(longestSubsequences[0]);
        vector<int> bestOriginal = longestSubsequences[0];
        for (int i = 1; i < longestSubsequences.size(); ++i)
        {
            vector<int> transformed = transformSubsequence(longestSubsequences[i]);
            if (transformed < best)
            {
                best = transformed;
                bestOriginal = longestSubsequences[i];
            }
        }

        // Output the original subsequence that resulted in the lexicographically smallest transformed one
        for (int x : bestOriginal)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}