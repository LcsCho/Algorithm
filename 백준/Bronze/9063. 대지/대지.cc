#include <bits/stdc++.h>

using namespace std;

struct Point {
    int x;
    int y;
};

int main() {
    int n;
    cin >> n;

    vector<Point> points(n);
    for (int i = 0; i < n; ++i) {
        cin >> points[i].x >> points[i].y;
    }

    int min_x = points[0].x;
    int min_y = points[0].y;
    int max_x = points[0].x;
    int max_y = points[0].y;

    for (int i = 1; i < n; ++i) {
        min_x = min(min_x, points[i].x);
        min_y = min(min_y, points[i].y);
        max_x = max(max_x, points[i].x);
        max_y = max(max_y, points[i].y);
    }

    int area = (max_x - min_x) * (max_y - min_y);
    cout << area << "\n";

    return 0;
}