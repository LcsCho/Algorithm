#include <bits/stdc++.h>

using namespace std;

int main() {
    int angles[3];
    int sum = 0;

    // 세 개의 각을 입력받음
    for (int i = 0; i < 3; ++i) {
        cin >> angles[i];
        sum += angles[i];
    }

    // 세 각의 합이 180이 아닌 경우 Error 출력
    if (sum != 180) {
        cout << "Error" << "\n";
    }
    // 세 각이 모두 60인 경우 Equilateral 출력
    else if (angles[0] == 60 && angles[1] == 60 && angles[2] == 60) {
        cout << "Equilateral" << "\n";
    }
    // 두 각이 같은 경우 Isosceles 출력
    else if (angles[0] == angles[1] || angles[1] == angles[2] || angles[0] == angles[2]) {
        cout << "Isosceles" << "\n";
    }
    // 모든 조건에 해당하지 않는 경우 Scalene 출력
    else {
        cout << "Scalene" << "\n";
    }

    return 0;
}