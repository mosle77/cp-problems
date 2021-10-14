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
//href:https://codeforces.com/problemset/problem/580/C

vector<vector<int>> adj;
vector<bool> cat, visited;
int levels = 0;

void dfs(int s, int m, int orig)
{
    visited[s] = 1;
    // cout << s << '\n';
    if (s != 0 && adj[s].size() == 1)
    {
        // cout<<" L:"<<l;
        if (!cat[s])
        {
            levels += 1;
            // cout << s;
        }
        else if (m >= 1)
        {
            levels += 1;
            // cout << s;
        }
    }
    else
    {
        for (auto u : adj[s])
        {
            if (!visited[u])
            {
                // cout << ' ' << u;
                if (cat[s])
                {
                    if (m >= 1)
                    {
                        dfs(u, m - 1, orig);
                    }
                }
                else
                {
                    dfs(u, orig, orig);
                }
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, x, y;
    bool b;
    cin >> n >> m;
    // cout << n;
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        // cout << b;
        cat.push_back(b);
    }
    adj = vector<vector<int>>(n);
    visited = vector<bool>(n);
    // read the graph
    for (int i = 0; i < n - 1; i++)
    {
        cin >> x >> y;
        adj[x - 1].push_back(y - 1);
        adj[y - 1].push_back(x - 1);
    }
    // for (auto x : adj)
    // {
    //     for (auto y : x)
    //     {
    //         cout << y << ' ';
    //     }
    //     cout << '\n';
    // }

    dfs(0, m, m);
    cout << levels;
    return 0;
}