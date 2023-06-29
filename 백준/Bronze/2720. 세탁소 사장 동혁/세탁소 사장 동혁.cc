#include <bits/stdc++.h>

using namespace std;

void calculateChange(int amount) {
    int quarters, dimes, nickels, pennies;
    
    quarters = amount / 25;         // 쿼터의 개수 계산
    amount %= 25;                   // 쿼터를 사용한 나머지 금액
    
    dimes = amount / 10;            // 다임의 개수 계산
    amount %= 10;                   // 다임을 사용한 나머지 금액
    
    nickels = amount / 5;           // 니켈의 개수 계산
    amount %= 5;                    // 니켈을 사용한 나머지 금액
    
    pennies = amount;               // 페니의 개수 계산
    
    cout << quarters << " " << dimes << " " << nickels << " " << pennies << endl;
}

int main() {
    int T;  // 테스트 케이스 개수
    
    // 테스트 케이스 개수 입력 받기
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        int C;  // 거스름돈 금액
        
        // 거스름돈 금액 입력 받기
        cin >> C;
        
        // 거스름돈 계산 및 출력
        calculateChange(C);
    }
    
    return 0;
}