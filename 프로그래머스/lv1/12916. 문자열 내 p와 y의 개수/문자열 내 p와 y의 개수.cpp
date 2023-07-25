#include <bits/stdc++.h>
using namespace std;

bool solution(string s)
{
    int p = count(s.begin(), s.end(), 'p');
    int y = count(s.begin(), s.end(), 'y');
    p += count(s.begin(), s.end(), 'P');
    y += count(s.begin(), s.end(), 'Y');
    if (p == y) return true;
    else return false;
}