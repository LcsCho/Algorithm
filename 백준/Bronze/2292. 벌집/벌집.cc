#include <bits/stdc++.h>

using namespace std;

int main() {
    long long N;
    cin >> N;

    long long count = 1;  // 초기 방의 개수
    long long step = 1;   // 현재 "환"에서의 이동 거리
    long long i = 1;      // 현재 "환"의 번호

    while (N > count) {
        count += 6 * step;  // 다음 "환"까지의 방 개수 증가
        step++;             // 다음 "환"으로 이동
        i++;                // "환" 번호 증가
    }

    cout << i << "\n";

    return 0;
}