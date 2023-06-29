#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int M, N;
    cin >> M >> N;

    int sum = 0;
    int minPrime = -1;
    for (int i = M; i <= N; i++) {
        if (isPrime(i)) {
            sum += i;
            if (minPrime == -1 || i < minPrime) {
                minPrime = i;
            }
        }
    }

    if (minPrime == -1) {
        cout << -1 << "\n";
    } else {
        cout << sum << "\n";
        cout << minPrime << "\n";
    }

    return 0;
}