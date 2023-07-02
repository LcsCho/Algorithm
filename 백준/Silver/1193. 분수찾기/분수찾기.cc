#include <bits/stdc++.h> 
using namespace std; 

pair<int, int> findFraction(int x) {
    int line = 1;
    int sum = 1;

    while (sum < x) {
        line++;
        sum += line;
    }

    int diff = sum - x;

    if (line % 2 == 0) {
        return make_pair(line - diff, 1 + diff);
    } else {
        return make_pair(1 + diff, line - diff);
    }
}

int main() {
    int x;
    cin >> x;

    pair<int, int> fraction = findFraction(x);

    cout << fraction.first << '/' << fraction.second << endl;

    return 0;
}