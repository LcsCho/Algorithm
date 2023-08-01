#include <bits/stdc++.h>

using namespace std;

string solution(string s) {
    string answer = "";
    string token = "";
    vector<int> v;
    for (stringstream ss(s); (ss >> token);) v.push_back(stoi(token));
        
    int min = *min_element(v.begin(), v.end());
    int max = *max_element(v.begin(), v.end());
    

    return to_string(min) + " " + to_string(max);
}