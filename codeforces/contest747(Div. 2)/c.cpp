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
    int t, d, j, i, n, dis;
    vector<int> v;
    char c;
    bool b = 0;
    string s;
    cin >> t;
    for (int it = 1; it <= t; it++)
    {
        b = 0;
        dis = 0;
        cin >> n >> c >> s;
        i = 0;
        if (s[n - 1] == c)
        {
            while (i < n - 1)
            {
                if (s[i] != c)
                {
                    b = 1;
                    break;
                }
                i++;
            }
            cout << b << '\n';
            if (b)
            {
                cout << n << '\n';
            }
        }
        else
        {
            i = n - 2;
            while (i >= 0)
            {
                if (s[i] != c)
                {
                    b = 2;
                    break;
                }
                i--;
            }
            if (i < 0)
            {
                cout << 1 << '\n';
                cout << n - 1 << '\n';
            }
            else if (i == n - 2)
            {
                cout << 2 << '\n';
                cout << n << '\n';
                cout << n - 1 << '\n';
            }
            else if (i == 0)
            {
                cout << 1 << '\n';
                cout << n-1 << '\n';
            }
            else
            {
                b = 1;
                j = i - 1;
                d = i;
                dis = n - 1 - i;
                // cout << "dis:" << dis << " d:" << d;
                while (j >= 0)
                {
                    if (s[j] != c)
                    {
                        if ((d - j) % dis != 0)
                        {
                            if (dis % (d - j) == 0)
                            {
                                dis = d - j;
                            }
                            else
                            {
                                b = 2;
                                break;
                            }
                        }
                        d = j;
                    }
                    j--;
                }
                d += 1;
                if (d % dis == 0 || dis % d == 0)
                {
                    if (dis < d)
                    {
                        dis = d;
                    }
                }
                else
                {
                    b = 2;
                }
                // cout << "dis:" << dis << " d:" << d;
                if (b == 1 && dis > 2)
                {
                    cout << 1 << '\n';
                    cout << dis - 1 << '\n';
                }
                else if (b == 1 && dis > 2)
                {
                    cout << 1 << '\n';
                    cout << d - 1 << '\n';
                }
                else
                {
                    cout << 2 << '\n';
                    cout << n << '\n';
                    cout << n - 1 << '\n';
                }
            }
        }
    }
    return 0;
}
