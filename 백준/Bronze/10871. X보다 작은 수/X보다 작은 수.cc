#include <bits/stdc++.h>
using namespace std;

int main() {
	int count;
	int number;

	cin >> count;
	int numberList[count];
	cin >> number;
	
	for (int i = 0; i < count; i++) {
		cin >> numberList[i];
	}
	
	for (int i = 0; i < count; i++) {
		if (numberList[i] < number)
		cout << numberList[i] << " ";
	}
	return 0;
}