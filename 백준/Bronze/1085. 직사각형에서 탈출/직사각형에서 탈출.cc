#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y, w, h;
    std::cin >> x >> y >> w >> h;

    // 각 경우의 최단 거리 계산
    int distance1 = x;              // x 거리
    int distance2 = w - x;          // w-x 거리
    int distance3 = y;              // y 거리
    int distance4 = h - y;          // h-y 거리

    // 최단 거리 중에서 가장 작은 값을 찾음
    int minDistance = min(min(distance1, distance2), min(distance3, distance4));

    cout << minDistance << "\n";

    return 0;
}