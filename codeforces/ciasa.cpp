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
//href:  https://codeforces.com/contest/463/problem/B
 

void solve(){
}
int main()
{
    int t,b;
    cin >> t;
    vector<int> v(t+1);
    int energie=0,dolar=0;
    v[0]=0;
    for(int i=1;i<=t;i++) {
        cin >> v[i];
        b=v[i]-v[i-1];
        energie+=b;
        // cout<<energie<<' ';
        if(energie>0){
            dolar+=energie;
            energie=0;
        }
    }
    cout << dolar;
 return 0;
}