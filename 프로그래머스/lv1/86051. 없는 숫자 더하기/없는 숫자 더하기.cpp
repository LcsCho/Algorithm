#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> numbers) {
    int tot = 45;
    for (int number : numbers) tot -= number;
    return tot;
}