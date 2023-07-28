#include <bits/stdc++.h>

using namespace std;

string solution(string s) {
    
    int middle = s.size() / 2;
    if (s.size() % 2 == 1) {
        return s.substr(middle, 1);
    }
    else {
        return s.substr(middle - 1, 2);
    }  
}