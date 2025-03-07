#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void dfs(int curr, int parent, bool passInPath, int &res, unordered_map<int, vector<int>> &adjmap, vector<int> &passengers)
{
    bool leaf = true;
    bool passenger = passInPath || passengers[curr];

    for (int neigh : adjmap[curr])
    {
        if (neigh != parent && neigh != 1)
        {
            dfs(neigh, curr, passenger, res, adjmap, passengers);
            leaf = false;
        }
    }

    if (leaf && passenger)
    {
        res++;
    }
}

int minBuses(int N, vector<int> &passengers, vector<vector<int>> &edges)
{
    unordered_map<int, vector<int>> adjmap;

    for (const auto &edge : edges)
    {
        int e1 = edge[0];
        int e2 = edge[1];
        adjmap[e1].push_back(e2);
        adjmap[e2].push_back(e1);
    }

    int res = 0;

    for (int neigh : adjmap[1])
    {
        dfs(neigh, 1, false, res, adjmap, passengers);
    }

    return res;
}

int main()
{
    int N = 3;
    vector<int> passengers = {0, 1, 1, 1}; // 1-based index
    vector<vector<int>> edges = {{1, 2}, {1, 3}};

    cout << "Minimum buses needed: " << minBuses(N, passengers, edges) << endl;

    return 0;
}