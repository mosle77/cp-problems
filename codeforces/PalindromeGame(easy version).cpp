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
    int t, j, count, n;
    cin >> t;
    string s;
    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        cin >> s;
        j = 0;
        count = 0;
        while (j < n)
        {
            if (s[j] == '0')
            {
                count += 1;
            }
            j++;
        }
        // cout<<count<<endl;
        if (count % 2 == 0)
        {
                cout << "BOB"
                     << "\n";
        }
        else
        {
            count -= 1;
            if (count == 0)
            {
                cout << "BOB"
                     << "\n";
            }
            else
            {
                cout << "ALICE"
                     << "\n";
            }
        }
    }
    return 0;
}