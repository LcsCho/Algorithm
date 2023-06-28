#include <bits/stdc++.h>
using namespace std;

int main() {
	int numberList[9];
	int max = 0, count = 0, temp = 0;
	
	for (int i = 0; i < 9; i++) {
		temp++;
		cin >> numberList[i];
		if (max < numberList[i]) {
			max = numberList[i];
			count = temp;
		}
		
	}
	cout << max << "\n" << count << "\n";
	
	return 0;
}