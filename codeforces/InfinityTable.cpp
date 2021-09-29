#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

// href:https://codeforces.com/contest/1560/problem/C
int main()
{

    long long n, x, y;
    long long a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 1)
            cout << 1 << ' ' << 1 << endl;
        else
        {
            long long r = 0;
            while ((r + 1) * (r + 1) < a)
                r++;
            //cout << r << endl  ;
            if (a - r * r < r + 1)
            {
                cout << a - r * r << ' ' << r + 1 << endl;
            }
            else if (a - r * r == r + 1)
            {
                cout << r + 1 << ' ' << r + 1 << endl;
            }
            else
            {
                cout << r + 1 << ' ' << 1 - (a - (r + 1) * (r + 1)) << endl;
            }
        }
    }
    return 0;
}