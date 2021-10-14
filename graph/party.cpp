#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>

using namespace std;
//href:https://codeforces.com/problemset/problem/115/A

vector<vector<int>> adj;
vector<bool> visited;
int l = 1, levels = 0;

void dfs(int s)
{
    visited[s]=1;
    if (adj[s].size() == 0)
    {
        // cout<<" L:"<<l;
        if (levels < l)
        {
            levels = l;
        }
    }
    else
    {
        for (auto u : adj[s])
        {
            l++;
            // cout << ' ' << u;
            dfs(u);
            l--;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,v;
    cin >> n;
    adj = vector<vector<int>>(n);
    visited = vector<bool>(n);
    // read the graph
    for (int i = 0; i < n; i++)
    {
        cin >> v;
        if (v >= 0)
        {
            adj[v - 1].push_back(i);
        }
    }
    // browse a graph
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            l = 1;
            dfs(i);
        }
    }
    cout << levels;
    return 0;
}