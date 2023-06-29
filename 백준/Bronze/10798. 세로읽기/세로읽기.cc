#include <iostream>

using namespace std;

int main() {
    string words[5];  // 다섯 개의 단어를 저장할 배열

    // 다섯 개의 단어 입력 받기
    for (int i = 0; i < 5; i++) {
        cin >> words[i];
    }

    string result;  // 세로로 읽은 순서대로 글자들을 저장할 문자열

    // 최대 15번째 자리까지 반복
    for (int j = 0; j < 15; j++) {
        // 다섯 개의 단어를 차례로 확인하여 j번째 자리의 글자를 result에 추가
        for (int i = 0; i < 5; i++) {
            if (j < words[i].length()) {
                result += words[i][j];
            }
        }
    }

    // 결과 출력
    cout << result << "\n";

    return 0;
}