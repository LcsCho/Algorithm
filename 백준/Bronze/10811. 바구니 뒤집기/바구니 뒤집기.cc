#include <bits/stdc++.h>
using namespace std;

int main() {
 	int N, M;
	cin >> N >> M;
	
	vector<int> baskets(N);
	for (int i = 0; i < N; i++) {
	    baskets[i] = i + 1;  // 바구니에 순서대로 번호 저장
	}
	
	for (int i = 0; i < M; i++) {
	    int left, right;
	    cin >> left >> right;
	
	    reverse(baskets.begin() + (left - 1), baskets.begin() + right);  // 바구니 순서 역순으로 변경
	}
	
	for (int i = 0; i < N; i++) {
	    cout << baskets[i] << " ";  // 결과 출력
	}
	cout << "\n";
	
	return 0;
}