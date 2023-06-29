#include <iostream>

using namespace std;

int main()
{
	int a, n, m, sum = 0;
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			cin >> a;
			if (a >= sum) {
				sum = a;
				n = i;
				m = j;
			}
		}
	}
	cout << sum << "\n";
	cout << n << ' ' << m << "\n";
	
	return 0;
}