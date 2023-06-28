#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	
	vector<int> baskets(N);
	
	for (int i = 0; i < N; i++) {
	    baskets[i] = i + 1;  // 바구니에 초기 공 번호 넣기
	}
	
	for (int i = 0; i < M; i++) {
	    int swap1, swap2;
	    cin >> swap1 >> swap2;
	
	    // 바구니의 공 교환
	    swap(baskets[swap1 - 1], baskets[swap2 - 1]);
	}
	
	// 결과 출력
	for (int i = 0; i < N; i++) {
	    cout << baskets[i] << " ";
	}
	
	return 0;
}