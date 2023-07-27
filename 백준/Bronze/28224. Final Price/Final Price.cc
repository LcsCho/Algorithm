#include <bits/stdc++.h>

using namespace std;

int n, a;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++) {
    	cin >> a;
    	sum += a;
    	
    }
    cout << sum;
    return 0;
}