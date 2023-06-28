#include <bits/stdc++.h>
using namespace std;

int main() {
	int count = 0;
	int a, b;
	cin >> count;
	
	for (int i = 1; i <= count; i++) {
		cin >> a >> b;
		cout << "Case #" << i << ": " << a + b << "\n";
	}
	
	return 0;
}