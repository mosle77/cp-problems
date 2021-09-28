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
    // string str;
    // getline(cin, str);
    // int a, b;
    // string x;
    // cin >> a >> b >> x;
    // cout << a << b << x;
    // cout << str[0];
    set<int> s;
    s.insert(3);
    s.insert(7);
    s.insert(4);
    s.insert(2);
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << "\n";
    }
    auto it = s.begin();
    cout << *it << endl;
    cout << s.count(2) << endl;
    s.erase(2); //remove
    it++;
    cout << *it << endl;
    cout << s.count(2) << endl;
    // for (auto x : s)
    // {
    //     cout << x << endl;
    // }
    // solution comes here
}