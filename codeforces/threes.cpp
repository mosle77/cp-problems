#include <bits/stdc++.h>

using namespace std;
//href:https://codeforces.com/contest/1560/problem/A
int main()
{

    int n, x, m = 0;
    vector<int> v;
    v.push_back(1);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        // cout << "v.size=" << v.size() << " x:" << x << endl;
        if (v.size() < x)
        {
            // cout << "yes";
            for (int j = v[v.size() - 1] + 1; v.size() < x; j++)
            {
                if (j % 3 != 0 && j % 10 != 3)
                {
                    v.push_back(j);
                }
            }
            cout << v[v.size() - 1] << endl;
        }
        else
        {
            cout << v[x - 1] << endl;
        }
    }
    return 0;
}