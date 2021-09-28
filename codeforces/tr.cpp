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
    int t;
    cin >> t;
    int n;
    for (int it = 1; it <= t; it++)
    {
        cin >> n;
        string str;
        cin >> str;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'L' || str[i] == 'R')
            {
                cout << str[i];
            }
            else if (str[i] == 'U')
            {
                cout << 'D';
            }
            else
            {
                cout << 'U';
            }
                }
        cout << endl;
    }
    return 0;
}