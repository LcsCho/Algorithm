#include <bits/stdc++.h>

using namespace std;

string s;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 97 && s[i] <= 122) s[i] -= 32;
        else if (s[i] >= 65 && s[i] <= 90) s[i] += 32;
        cout << s[i];
    }
    cout << "\n";
    
    return 0;
}