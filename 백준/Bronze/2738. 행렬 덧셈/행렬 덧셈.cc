#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int arr[N][M];
    int sumArr[N][M];
    
    for (int i = 0; i < N; i++) {
    	for (int j = 0; j < M; j++) {
    		cin >> arr[i][j];
    		sumArr[i][j] = arr[i][j];
		}
	}
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> arr[i][j];
			sumArr[i][j] += arr[i][j];
		}
	}
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << sumArr[i][j] << " ";
		}
		cout << "\n";
	}

    return 0;
}