#include <bits/stdc++.h>

using namespace std;

string solution(string pn) {
    string answer = "";
    for (int i = 0; i < pn.size() - 4; i++)
        answer += "*";
    
    answer += pn.substr(pn.size() - 4);
    
    return answer;
}