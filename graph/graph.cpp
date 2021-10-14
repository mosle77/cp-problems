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
// href:
vector<bool> visited;
queue<int> q;
vector<int> dist;

void dfs(vector<int> adj[], int s)
{
    if (!visited[s])
    {
        visited[s] = true;
        cout << "-> " << s;
        for (auto u : adj[s])
        {
            dfs(adj, u);
        }
    }
}
void bfs(vector<int> adj[], int x)
{
    visited[x] = true;
    dist[x] = 0;
    q.push(x);
    while (!q.empty())
    {
        int s = q.front();
        q.pop();
        cout << "-> " << s;
        for (auto u : adj[s])
        {
            if (visited[u])
                continue;
            visited[u] = true;
            dist[u] = dist[s] + 1;
            q.push(u);
        }
    }
}

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void printGraph(vector<int> adj[], int V)
{
    for (int v = 0; v < V; ++v)
    {
        cout << "\n Adjacency list of vertex "
             << v << "\n head ";
        for (auto x : adj[v])
            cout << "-> " << x;
        printf("\n");
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int V = 5;
    vector<int> adj[V];
    dist = vector<int>(V, 0);
    visited = vector<bool>(V);
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 4);
    addEdge(adj, 4, 3);
    printGraph(adj, V);
    cout << '\n';
    dfs(adj, 0);
    cout << '\n';
    // bfs(adj, 0);
    return 0;
}