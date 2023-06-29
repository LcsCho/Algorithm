#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int count = 1; // 코드1의 수행 횟수
    
    // 수행 횟수를 다항식으로 나타낼 수 있는지 확인
    int degree = 0; // 다항식의 최고차항의 차수
    
    if (count > 1) {
        int temp = count - 1;
        while (temp != 0) {
            temp /= 2;
            degree++;
        }
    }
    
    if (degree > 3)
        degree = 4;
    
    cout << count << "\n";
    cout << degree << "\n";
    
    return 0;
}