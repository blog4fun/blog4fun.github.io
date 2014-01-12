#include<iostream>
#include<limits>
using namespace std;
typedef unsigned long long ull;

// n = 0, then for any i \in Z, 2^i >= n. In this case, answer is -INF
int msb_v1(int n){
    return n ? sizeof(n)*8 - __builtin_clz(n) - 1 : numeric_limits<int>::min();
}

int msb_ull(unsigned long long n){
    return n ? sizeof(n)*8 - __builtin_clzll(n) - 1 : numeric_limits<ull>::min();
}
