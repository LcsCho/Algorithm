#include <bits/stdc++.h>
using namespace std;

int main() {
	int count = 0;
	int totWon = 0;
	int sumWon = 0;
	int ea = 0;
	int won = 0;
	
	cin >> totWon;	
	cin >> count;

	
	for (int i = 0; i < count; i++) {
		cin >> won >> ea;
		sumWon += won * ea;
	}
	if (sumWon == totWon) cout << "Yes";
	else cout << "No";
	return 0;
}