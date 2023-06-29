#include <bits/stdc++.h>

using namespace std;

vector<int> primeFactors(int num) {
    vector<int> factors;

    for (int i = 2; i * i <= num; i++) {
        while (num % i == 0) {
            factors.push_back(i);
            num /= i;
        }
    }

    if (num > 1) {
        factors.push_back(num);
    }

    return factors;
}

int main() {
    int N;
    cin >> N;

    if (N == 1) {
        // N이 1인 경우 아무것도 출력하지 않음
        return 0;
    }

    vector<int> factors = primeFactors(N);

    for (int factor : factors) {
        cout << factor << "\n";
    }

    return 0;
}