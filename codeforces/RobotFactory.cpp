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
//href:https://codeforces.com/contest/1600/problem/J
vector<vector<int>> v;

int rooms(int side, int i, int j)
{
    int r = v[i][j], it = 4, n = 1, k = 4;
    if (r < 0)
    {
        return 0;
    }
    else
    {
        v[i][j] = -1;
        while (k)
        {
            if (r % 2)
            {
                it--;
            }
            else
            {
                if (k == 1 && k != side)
                {
                    n += rooms(3, i - 1, j);
                }
                if (k == 2 && k != side)
                {
                    n += rooms(4, i, j + 1);
                }
                if (k == 3 && k != side)
                {
                    n += rooms(1, i + 1, j);
                }
                if (k == 4 && k != side)
                {
                    n += rooms(2, i, j - 1);
                }
            }
            r = r / 2;
            k--;
        }
        if (it == 0)
        {
            return 1;
        }
        else
        {
            return n;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M, a;
    cin >> N >> M;
    v = vector<vector<int>>(N);
    // visit = vector<vector<bool>>(N);
    vector<int> L;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> a;
            v[i].push_back(a);
            // visit[i].push_back(0);
        }
    }
    a = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            // cout<<i<<' '<<j<<'\n';
            if (v[i][j] >= 0)
            {
                // cout << i << ' ' << j << '\n';
                L.push_back(rooms(0, i, j));
                a += 1;
            }
        }
    }
    sort(L.begin(), L.begin() + a);
    while (a)
    {
        cout << L[a - 1] << ' ';
        a--;
    }
    return 0;
}