#include <bits/stdc++.h>

using namespace std;

int n, m;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;
	if (n * 100 >= m) cout << "Yes";
	else cout << "No";
	
	return 0;
}