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

vector<int> subset={};
void search(int k,int n)
{
    if (k == n)
    { // process subset
        for (auto x : subset)
        {
            cout << x << ' ';
        }
        cout<<endl;
    }
    else
    { // include k in the subset
        subset.push_back(k);
        search( k + 1,n);
        subset.pop_back();
        // don’t include k in the subset
        search( k + 1,n);
    }
}
vector<int> all_subset(vector<int>){
    
}
int main()
{
    int t;
    cin >> t;
    vector<int> v;
    // for (int i = 0; i < t; i++)
    // {
    //     v.push_back(i);
    // }
    search(0,t);
    // for (auto x : v)
    // {
    //     cout << x << ' ';
    // }
    return 0;
}