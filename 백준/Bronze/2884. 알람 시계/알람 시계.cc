#include <bits/stdc++.h>
using namespace std;

int main() {
	int hr, min;
	cin >> hr >> min;
	if (hr == 0) hr += 24;
	
	int time = hr * 60 + min;
	time -= 45;
	
	hr = time / 60;
	if (hr / 24 == 1) hr -= 24;
	min = time % 60;
	
	cout << hr << " " << min << "\n";
	
	return 0;
}