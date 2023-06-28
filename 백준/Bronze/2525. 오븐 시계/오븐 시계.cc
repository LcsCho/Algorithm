#include <bits/stdc++.h>
using namespace std;

int main() {
	int hr, min, plusMin;
	cin >> hr >> min;
	cin >> plusMin;
	
	int time = hr * 60 + min + plusMin;
	
	hr = time / 60;
	min = time % 60;
	if (hr >= 24) hr -= 24;
	cout << hr << " " << min << "\n";
	
	return 0;
}