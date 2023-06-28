#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	
	vector<int> scores(N);
	for (int i = 0; i < N; i++) {
	    cin >> scores[i];  // 성적 입력
	}
	
	int maxScore = *max_element(scores.begin(), scores.end());  // 최댓값 구하기
	
	double sum = 0.0;
	for (int i = 0; i < N; i++) {
	    sum += (double)scores[i] / maxScore * 100.0;  // 새로운 성적 계산하여 누적 합산
	}
	
	double average = sum / N;  // 평균 계산
	
	cout << fixed;
	cout.precision(6);
	cout << average << "\n";  // 결과 출력
	
	return 0;
}