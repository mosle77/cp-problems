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

int main()
{
    int n, a, b, t1, t2, bo = 0, size1, size2;
    cin >> n;
    deque<int> s1, s2, s3;
    cin >> t1;
    for (int it = 1; it <= t1; it++)
    {
        cin >> a;
        s1.push_back(a);
    }
    cin >> t2;
    for (int it = 1; it <= t2; it++)
    {
        cin >> a;
        s2.push_back(a);
    }
    int j = 0;
    s3 = s1;
    size1 = s1.size();
    size2 = s2.size();
    while (size1 != 0 && size2 != 0)
    {
        a = s1.front();
        b = s2.front();
        // cout << j << ' ';
        // cout << a << ' ' << b << endl;
        if (a < b)
        {
            s1.pop_front();
            s2.pop_front();
            s2.push_back(a);
            s2.push_back(b);
            size1--;
            size2++;
        }
        else
        {
            s1.pop_front();
            s2.pop_front();
            s1.push_back(b);
            s1.push_back(a);
            size2--;
            size1++;
        }
        j++;
        if (j > 200)
        {
            bo = 1;
            break;
        }
    }
    if (bo == 1)
    {
        cout << -1;
    }
    else
    {
        cout << j << ' ';
        if (s1.size() == 0)
        {
            cout << 2;
        }
        else
        {
            cout << 1;
        }
    }
    return 0;
}