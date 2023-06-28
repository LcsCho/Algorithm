#include <bits/stdc++.h>
using namespace std;

int main() {
	int count, max = -1000000, min = 1000000;

	cin >> count;
	int numberList[count];
	
	for (int i = 0; i < count; i++) {
		cin >> numberList[i];
		if (max < numberList[i]) max = numberList[i];
		if (min > numberList[i]) min = numberList[i];
	}
	cout << min << " " << max << "\n";
		
	
	return 0;
}