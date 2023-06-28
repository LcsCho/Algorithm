#include <bits/stdc++.h>
using namespace std;

int main() {
 	set<int> remainders; // 서로 다른 나머지를 저장하기 위한 set
 	
	for (int i = 0; i < 10; i++) {
	    int num;
	    cin >> num;
	
	    int remainder = num % 42;
	    remainders.insert(remainder);  // 나머지 추가
	}
	
	int distinctCount = remainders.size();  // 서로 다른 나머지의 개수
	
	cout << distinctCount << "\n";
	
	return 0;
}