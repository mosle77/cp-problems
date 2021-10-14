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
//href:https://codeforces.com/contest/1594/problem/B

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t, n, k;
    long long p = 0, s = 0,c=1000000007;
    cin >> t;
    for (int it = 1; it <= t; it++)
    {
        cin >> n >> k;
        if (n == 2)
        {
            cout << k << '\n';
        }
        else
        {
            s = 0;
            p = 1;
            while (k)
            {
                if (k % 2 == 1)
                {
                    s += p;
                    s=s%c;
                }
                k = k / 2;
                p *= n;
                p=p%c;
            }
            cout << s << '\n';
        }
    }
    return 0;
}