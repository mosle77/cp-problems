#ifndef BINARY_SEARCH_H
#define BINARY_SEARCH_H

#include <assert.h>
// find the index of the first value that is true in a predicate pattern that looks like
// 0 ... 0 1 ...
// search space : [lo, hi] inclusive
template<typename T,typename U>
T first_true(T lo, T hi, U f) {
    hi++; assert(lo <= hi);
    while (lo < hi) {
        T mid = lo+(hi-lo)/2;
        f(mid) ? hi = mid : lo = mid+1; 
    } 
    return lo;
}
// find the index of the last value that is false in a predicate pattern that looks like
// 0 ... 0 1 ...
// search space : [lo, hi] inclusive
template<typename T,typename U>
T last_false(T lo, T hi, U f) {
    lo--; assert(lo <= hi);
    while (lo < hi) {
        T mid = lo+(hi-lo+1)/2;
        f(mid) ?  hi = mid-1 : lo = mid;
    } 
    return lo;
}

//~ change to 0 to not have the example
#define BINARY_SEARCH_EXAMPLE 1
#if BINARY_SEARCH_EXAMPLE
#define N 10
int a[N] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int target_value = 5;
// usual binary seach
bool f(int i)
{
    return (a[i] >= target_value);
}
bool g(int i)
{
    return (a[i] > target_value);
}
#include <iostream>
using namespace std;
int main()
{
    int x = first_true(0, N - 1, f);
    int y = last_false(0, N - 1, g);
    cout<<x << endl;
    cout<<y << endl;
    assert(x == y);
}
#endif
#endif //BINARY_SEARCH_H