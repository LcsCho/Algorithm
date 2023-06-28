#include <bits/stdc++.h>
using namespace std;

int main() {
	int count;
	int sum = 0;
	char num;
	cin >> count;
	
	for (int i = 0; i < count; i++) {
		cin >> num;
		sum += num - 48; // char형을 받았기 때문에, 아스키코드 '0'의 값(48)을 빼줌 
	}
	cout << sum;
	
	return 0;
}