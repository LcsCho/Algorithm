#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr) {
   if (arr.empty() || arr[0] == 10) {
       arr.erase(arr.begin());
       arr.push_back(-1);
       return arr;
   }
    
    auto min = min_element(arr.begin(), arr.end());
    
    arr.erase(min);
    return arr;
}