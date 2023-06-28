#include <bits/stdc++.h> 

using namespace std;

int main() {
    string word;
    cin >> word;

    vector<int> positions(26, -1);  // 알파벳의 위치를 저장할 벡터, 초기값은 -1

    for (int i = 0; i < word.length(); i++) {
        int index = word[i] - 'a';  // 알파벳의 인덱스 계산
        if (positions[index] == -1) {
            positions[index] = i;  // 처음 등장한 위치 저장
        }
    }

    for (int i = 0; i < 26; i++) {
        cout << positions[i] << " ";
    }
    cout << "\n";

    return 0;
}
