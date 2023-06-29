#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;

    while (true) {
        cin >> a >> b >> c;

        // 입력이 0 0 0이면 종료
        if (a == 0 && b == 0 && c == 0) {
            break;
        }

        // 가장 긴 변의 길이
        int max_side = max(max(a, b), c);

        // 나머지 두 변의 길이의 합
        int sum_of_other_sides = a + b + c - max_side;

        // 가장 긴 변의 길이보다 나머지 두 변의 길이의 합이 작으면 Invalid 출력
        if (max_side >= sum_of_other_sides) {
            cout << "Invalid" << "\n";
        }
        // 세 변의 길이가 모두 같은 경우 Equilateral 출력
        else if (a == b && b == c) {
            cout << "Equilateral" << "\n";
        }
        // 두 변의 길이만 같은 경우 Isosceles 출력
        else if (a == b || b == c || a == c) {
            cout << "Isosceles" << "\n";
        }
        // 모든 조건에 해당하지 않는 경우 Scalene 출력
        else {
            cout << "Scalene" << "\n";
        }
    }

    return 0;
}