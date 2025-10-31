//2019 資訊學科能力競賽 新北區複賽
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int X, Y;
    cin >> X >> Y;

    vector<vector<int>> income(Y, vector<int>(X));
    for (int y = 0; y < Y; y++) {
        for (int x = 0; x < X; x++) {
            cin >> income[y][x];
        }
    }

    int N;
    cin >> N;

    for (int q = 0; q < N; q++) {
        int x1, x2, y1, y2;
        cin >> x1 >> x2 >> y1 >> y2;

        int sum = 0;
        for (int y = y1; y <= y2; y++) {
            for (int x = x1; x <= x2; x++) {
                sum += income[y][x];
            }
        }
        cout << sum << " ";
    }
}
