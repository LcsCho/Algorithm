#include <bits/stdc++.h>

using namespace std;

int solution(int n) {
    int answer = 0;    
    if (n == 1) return 0;
    while (n != 1) {
        if (answer == 500) {
            return -1;   
            break;
        }
        
        if (n % 2 == 1) n = n * 3 + 1;
        else n /= 2; 
        
        answer++;
    }
    
    return answer;
}