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
//href:

void solve()
{
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, min, x;
    long long max = 100000000000;
    char c;
    cin >> t;
    int v;
    bool b;
    for (int it = 1; it <= t; it++)
    {
        cin >> n;
        max = 100000000000;
        min = 0;
        b = 1;
        // v=vector<int>(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v >> c;
            // cout << v << c;
            if (c == '-')
            {
                if (max > v - 1 +  25+min)
                {
                    max = v - 1 + 25+min;
                }
                // b = 0;
            }
            else
            {

                min += v +  25;
                // b = 1;
            }
        }
        cout << max - min + 1 << '\n';
    }
    return 0;
}