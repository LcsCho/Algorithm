#include <bits/stdc++.h> 

using namespace std;

int main() {
  	string s;
  	int count = 0;
  	
  	getline(cin, s); // 공백 포함 문자열 입력 
  	for (int i = 0; i < s.length(); i++) {
  		if (s[i] == ' ') count++;
 
  	}
  	if (s[0] == ' ') count--;
  	if (s[s.length() - 1] == ' ') count--;
  	
  	cout << count + 1;
    return 0;
}