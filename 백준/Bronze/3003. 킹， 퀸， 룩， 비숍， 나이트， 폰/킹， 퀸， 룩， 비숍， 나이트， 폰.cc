#include <bits/stdc++.h>

using namespace std;

int main() {
	int chessList[6] = {1, 1, 2, 2, 2, 8};
	int inputList[6];
	
	for (int i = 0; i < 6; i++) {
		cin >> inputList[i];
		chessList[i] -= inputList[i];
	}
	
	for (int i = 0; i < 6; i++)
		cout << chessList[i] << " ";
    
	return 0;
}