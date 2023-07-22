#include<bits/stdc++.h> 

using namespace std; 

int a[5];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cout.tie(NULL);
    
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
        sum += a[i] * a[i];
    }
    cout << sum % 10 << "\n";
    return 0;
}