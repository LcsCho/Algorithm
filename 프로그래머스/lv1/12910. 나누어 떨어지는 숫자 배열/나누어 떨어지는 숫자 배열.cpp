#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> v;    
    for (int a : arr) {
        if(a % divisor == 0) v.push_back(a);
    }
    if (v.size() == 0) v.push_back(-1);
    else sort(v.begin(), v.end());    
 
    return v;
}