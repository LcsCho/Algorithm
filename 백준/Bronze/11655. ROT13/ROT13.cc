#include <bits/stdc++.h> 

using namespace std; 

string str;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	getline(cin, str);
	string rotStr[str.length()];
	for (int i = 0; i < str.length(); i++) {
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M')) {
			char cPlus = str[i] + 13;
			rotStr[i] = cPlus;
		}
		else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z')) {
			char cMinus =  str[i] - 13;
			rotStr[i] = cMinus;
		}
		else {
			char c = str[i];
			rotStr[i] = c;
		}
		cout << rotStr[i];
	}
	return 0;
}
