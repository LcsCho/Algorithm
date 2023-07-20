#include <bits/stdc++.h> 

using namespace std; 

string str;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	getline(cin, str);
	for (int i = 0; i < str.size(); i++) {
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M')) {
			str[i] = str[i] + 13;
		}
		else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z')) {
			str[i] = str[i] - 13;
		}
		cout << str[i];
	}
	return 0;
}
