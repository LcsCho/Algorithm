#include <bits/stdc++.h> 

using namespace std;

int main() {
    string A, B;
    cin >> A >> B;  // 두 수를 입력받음

    reverse(A.begin(), A.end());  // A를 거꾸로 뒤집음
    reverse(B.begin(), B.end());  // B를 거꾸로 뒤집음

    int reversed_A = stoi(A);  // 문자열을 정수로 변환
    int reversed_B = stoi(B);  // 문자열을 정수로 변환

    // 더 큰 수 출력
    if (reversed_A > reversed_B) {
        cout << reversed_A << endl;
    } else {
        cout << reversed_B << endl;
    }

    return 0;
}