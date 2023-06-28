#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
    
    vector<int> baskets(N, 0);  // 초기에 모든 바구니에 0으로 초기화

for (int i = 0; i < M; i++) {
    int start, end, ball;
    cin >> start >> end >> ball;

    // 시작 바구니부터 끝 바구니까지 공의 번호로 채우기
    for (int j = start - 1; j <= end - 1; j++) {
        baskets[j] = ball;
    }
}

// 결과 출력
for (int i = 0; i < N; i++) {
    cout << baskets[i] << " ";
}

return 0;

	
	return 0;
}