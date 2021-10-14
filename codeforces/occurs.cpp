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


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    vector<char> l;
    vector<int> n;
    bool b;
    int j, p = 1;
    for (auto x : s)
    {
        j = 0;
        b = 0;
        for (auto y : l)
        {
            j++;
            // cout << x << ',' << y << ':' << j;
            if (x == y)
            {
                b = 1;
                break;
            }
        }
        j--;
        if (b == 1)
        {
            n[j] += 1;
        }
        else
        {
            l.push_back(x);
            n.push_back(1);
        }
    }
    for (auto x : n)
    {
        // cout << x << '\n';
        p *= x;
    }
    cout << p;
    return 0;
}