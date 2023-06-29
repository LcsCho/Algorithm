#include <bits/stdc++.h>

using namespace std;

string convertToBase(int number, int base) {
    string result = "";

    while (number > 0) {
        int remainder = number % base;
        char digit;

        if (remainder < 10) {
            digit = remainder + '0';
        } else {
            digit = remainder - 10 + 'A';
        }

        result += digit;
        number /= base;
    }

    reverse(result.begin(), result.end());

    return result;
}

int main() {
    int N;  // 10진법 수 N
    int B;  // 진법 B

    // N과 B 입력 받기
    cin >> N >> B;

    // B진법으로 변환하여 출력
    cout << convertToBase(N, B) << endl;

    return 0;
}