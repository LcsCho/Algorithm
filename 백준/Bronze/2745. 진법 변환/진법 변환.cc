#include <bits/stdc++.h>

using namespace std;

int main() {
    string N;  // B진법 수 N을 저장할 문자열
    int B;     // 진법 B

    // N과 B 입력 받기
    cin >> N >> B;

    int result = 0;  // 10진법으로 변환된 결과값을 저장할 변수

    int len = N.length();  // N의 길이

    // 각 자리의 값을 계산하여 10진법으로 변환
    for (int i = 0; i < len; i++) {
        char ch = N[i];
        int num;

        if (ch >= 'A' && ch <= 'Z') {
            num = ch - 'A' + 10;  // 알파벳 대문자의 경우 10 이상의 숫자
        } else {
            num = ch - '0';  // 숫자의 경우 문자를 정수로 변환
        }

        result += num * pow(B, len - i - 1);  // B진법의 자릿값을 10진법으로 변환하여 더함
    }

    // 결과 출력
    cout << result << endl;

    return 0;
}