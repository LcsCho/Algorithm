#include <bits/stdc++.h>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    int sum = 0;
    while (n != 0) {
        sum = n % 10;
        n /= 10;
        answer.push_back(sum);
        
    }
    return answer;
}