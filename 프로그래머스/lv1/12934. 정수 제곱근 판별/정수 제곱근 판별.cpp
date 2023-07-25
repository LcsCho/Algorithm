#include <bits/stdc++.h>

using namespace std;

long long solution(long long n) {
    long long r = sqrt(n);
    if (r * r == n) return pow(r + 1, 2);
    else return -1;
}