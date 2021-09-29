#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;
// href:https://codeforces.com/contest/1560/problem/B
int main()
{
    int n, a, b, c;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        int d = abs(a - b);
        a = max(a, max(b, c));
        // cout << a << endl;
        if (a <= (d * 2))
        {
            if (d < c)
            {
                cout << c - d << endl;
            }
            if (d >= c)
            {
                cout << d + c << endl;
            }
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}