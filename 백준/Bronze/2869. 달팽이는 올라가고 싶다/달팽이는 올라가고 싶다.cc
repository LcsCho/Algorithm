#include <bits/stdc++.h>

using namespace std;

int N, sum;
int num1[10001], num2[10001];
string s1, s2, tmp;
vector<int> ans;

int main() {
    int a,b,v;
    cin >> a >> b >> v;
    int day = 1;
    day += (v - a) / (a - b);
    if ((v - a) % (a - b) != 0)
        day++;
    if (a >= v)
        cout << "1";
    else
        cout << day;
        
    return 0;
}