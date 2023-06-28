#include <bits/stdc++.h>
using namespace std;

int main() {
	string text = "";
	int num = 0;
	cin >> num;
	
	for (int i = 0; i < num; i++) {
		cin >> text;
		int temp = text.size();
		cout << text[0] << text[temp - 1] << "\n";
	}
	
	return 0;
}