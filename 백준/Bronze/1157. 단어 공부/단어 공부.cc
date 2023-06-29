#include <bits/stdc++.h>

using namespace std;

int main() {
    string word;
    cin >> word;

    // 입력 받은 단어를 모두 대문자로 변환
    transform(word.begin(), word.end(), word.begin(), ::toupper);

    vector<int> count(26, 0);  // 알파벳 카운트를 저장할 벡터, 초기값은 0으로 설정

    // 각 알파벳의 등장 횟수를 카운트
    for (char c : word) {
        if (isalpha(c)) {
            int index = c - 'A';  // 알파벳의 인덱스 계산
            count[index]++;
        }
    }

    // 가장 많이 사용된 알파벳 찾기
    int maxCount = *max_element(count.begin(), count.end());

    // 가장 많이 사용된 알파벳이 유일한지 확인
    int maxCountIndex = distance(count.begin(), find(count.begin(), count.end(), maxCount));
    count[maxCountIndex] = -1;  // 현재 가장 많이 사용된 알파벳은 제외하고 다시 찾기

    if (find(count.begin(), count.end(), maxCount) != count.end()) {
        cout << '?';  // 가장 많이 사용된 알파벳이 여러 개인 경우
    } else {
        cout << static_cast<char>('A' + maxCountIndex);  // 가장 많이 사용된 알파벳 출력
    }

    return 0;
}