#include <bits/stdc++.h> 

using namespace std; 

string s;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> s;

	
	for (int i = 'a'; i <= 'z'; i++) {
		int cnt = 0;
		for (int j = 0; j < s.length(); j++) {
			char c = s[j];
			if (c == i) cnt++;
		}
		cout << cnt << " ";
	}

	return 0;
}