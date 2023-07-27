#include<bits/stdc++.h>

using namespace std; 

int n, ret; 
string s; 
// 큰돌님 코드 참조
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n; 
	for(int i = 0; i < n; i++){
		cin >> s; 
		stack<char> stk;
		for(char a : s){
			if(stk.size() && stk.top() == a)stk.pop();
			else stk.push(a); 
		} 
		if(stk.size() == 0)ret++;
	}
	cout << ret << "\n"; 
}