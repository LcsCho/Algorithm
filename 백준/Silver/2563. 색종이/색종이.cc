#include <bits/stdc++.h> 
using namespace std; 

int calculateBlackArea(const vector<pair<int, int>>& papers) {
    vector<vector<int>> canvas(100, vector<int>(100, 0));

    // 색종이가 있는 위치를 1로 표시
    for (const auto& paper : papers) {
        int x = paper.first;
        int y = paper.second;

        for (int i = x; i < x + 10; i++) {
            for (int j = y; j < y + 10; j++) {
                canvas[i][j] = 1;
            }
        }
    }

    int blackArea = 0;

    // 검은 영역의 넓이 계산
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (canvas[i][j] == 1) {
                blackArea++;
            }
        }
    }

    return blackArea;
}

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> papers(N);

    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        papers[i] = make_pair(x, y);
    }

    int blackArea = calculateBlackArea(papers);

    cout << blackArea << endl;

    return 0;
}