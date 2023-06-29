#include <bits/stdc++.h>

using namespace std;

int main() {
	int N, K, output;
	int count = 0, order = 0;
	cin >> N >> K;
	
	int arr[N];	
	
	for (int i = 1; i <= N; i++) {
		if (i > N) break;
		if (N % i == 0) {
			count++;
			arr[order++] = i;	
		}		
	}	
	if (count < K) cout << 0;
	else cout << arr[K - 1];

	    
    return 0;
}