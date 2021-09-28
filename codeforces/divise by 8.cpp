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
int divise(string s)
{
    int a, b, i;
    bool a6 = 0, a2 = 0, a4 = 0, a36 = 0, a76 = 0, a12 = 0, a52 = 0, a92 = 0, a44 = 0;
    i = s.size() - 1;
    while (i >= 0)
    {
        if (s[i] == '0')
        {
            return 0;
        }
        else if (s[i] == '8')
        {
            return 8;
        }
        else if (s[i] == '6')
        {
            if (a4 == 1)
            {
                return 64;
            }
            a6 = 1;
        }
        else if (s[i] == '2')
        {
            if (a4 == 1)
            {
                return 24;
            }
            a2 = 1;
        }
        else if (s[i] == '4')
        {
            if (a4 == 1)
            {
                a44 = 1;
            }
            a4 = 1;
        }
        else if (s[i] == '1')
        {
            if (a44 == 1)
            {
                return 144;
            }
            if (a52 == 1)
            {
                return 152;
            }
            if (a92 == 1)
            {
                return 192;
            }
            if (a12 == 1)
            {
                return 112;
            }
            if (a2 == 1)
            {
                a12 = 1;
            }
            if (a6 == 1)
            {
                return 16;
            }
        }
        else if (s[i] == '3')
        {
            if (a44 == 1)
            {
                return 344;
            }
            if (a2 == 1)
            {
                return 32;
            }
            if (a6 == 1)
            {
                a36 = 1;
            }
            if (a36 == 1)
            {
                return 336;
            }
            if (a76 == 1)
            {
                return 376;
            }
        }
        else if (s[i] == '7')
        {
            if (a44 == 1)
            {
                return 744;
            }
            if (a2 == 1)
            {
                return 72;
            }
            if (a6 == 1)
            {
                a76 = 1;
            }
            if (a36 == 1)
            {
                return 736;
            }
            if (a76 == 1)
            {
                return 776;
            }
        }
        else if (s[i] == '5')
        {
            if (a44 == 1)
            {
                return 544;
            }
            if (a52 == 1)
            {
                return 552;
            }
            if (a92 == 1)
            {
                return 592;
            }
            if (a12 == 1)
            {
                return 512;
            }
            if (a2 == 1)
            {
                a52 = 1;
            }
            if (a6 == 1)
            {
                return 56;
            }
        }
        else if (s[i] == '9')
        {
            if (a44 == 1)
            {
                return 944;
            }
            if (a52 == 1)
            {
                return 952;
            }
            if (a92 == 1)
            {
                return 992;
            }
            if (a12 == 1)
            {
                return 912;
            }
            if (a2 == 1)
            {
                a92 = 1;
            }
            if (a6 == 1)
            {
                return 96;
            }
        }

        i--;
    }
    return -1;
}
int main()
{
    string s;
    int n;
    bool b = 0;
    cin >> s;
    if (divise(s) >= 0)
    {
        cout << "YES" << endl
             << divise(s);
    }
    else
    {
        cout << "NO";
    }
    return 0;
}