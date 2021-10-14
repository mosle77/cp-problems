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
#include <cstring>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>

using namespace std;
//href:https://codeforces.com/problemset/problem/1569/B

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, counter = 0, count, total = 0, k, m, max, min;
    cin >> t;
    string s;
    for (int i = 1; i <= t; i++)
    {
        cin >> n >> s;
        // cout<<n<<s;
        // cout<<i<<endl;
        counter = 0;
        total = 0;
        char tab[n][n];
        count = 0;
        m = 0;
        // memset(tab, 0, sizeof(tab));
        for (int j = n - 1; j >= 0; j--)
        {
            if (s[j] == '1')
            {
                for (int k = j; k >= 0; k--)
                {
                    /* code */
                    tab[j][k] = '=';
                    tab[k][j] = '=';
                }
            }
            else
            {
                count++;
                if (counter == 0)
                {
                    counter=1;
                    m = j;
                    min = j;
                }
                for (int k = j; k >= 0; k--)
                {
                    /* code */
                    if (s[k] == '1')
                    {
                        tab[j][k] = '=';
                        tab[k][j] = '=';
                    }
                    else
                    {
                        tab[j][k] = '+';
                        tab[k][j] = '-';
                    }
                }
                min = j;
            }
            tab[j][j] = 'X';
        }
        if (count == 1 || count == 2)
        {
            cout << "NO" << '\n';
        }
        else
        {
            cout << "YES" << endl;
            
            if (count > 2)
            {
                // cout<<min<<' '<<m;
                tab[min][m] = '+';
                tab[m][min] = '-';
            }
            for (int k = 0; k < n; k++)
            {
                /* code */
                for (int d = 0; d < n; d++)
                {
                    cout << tab[k][d];
                    /* code */
                }
                cout << endl;
            }
        }
    }
    return 0;
}