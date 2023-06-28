#include <bits/stdc++.h>
using namespace std;

int main() {
	int count = 0;
	cin >> count;
	
	for (int i = 0; i < count; i++) {
		for (int j = 1; j < count - i; j++) {
			cout << " ";
		}
		for (int k = 0; k <= i; k++)
			cout << "*";
			
		cout << "\n";
	}
	
	return 0;
}