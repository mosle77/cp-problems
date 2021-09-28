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

vector<int> insert_sort(vector<int> vect, int n)
{
    for (int i = 0; i < vect.size(); i++)
    {
        if (vect[i] >= n)
        {
            vect.insert(i + 1, n);
        }
    }
}
int main()
{
    int n, m, s, min = 0, max = 0;
    vector<int> a(m), b(m), l(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i] >> b[i];
    }
}