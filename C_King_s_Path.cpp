#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int dirx[] = {0, 0, 1, -1, 1, 1, -1, -1};
int diry[] = {1, -1, 0, 0, 1, -1, 1, -1};
int n;

bool isValid(int x, int y, const vector<vector<int>> &vec) {
    int cnt = 0;
    for (int k = 0; k < n; k++) {
        if(x >= vec[k][1] && x <= vec[k][2] && y == vec[k][0]) {
            cnt++;
        }
    }
    if(cnt == 0) return false;
    return true;
}

int steps(int x1, int y1, int x2, int y2, const vector<vector<int>> &vec) {
    set<pair<int, int>> visited;
    queue<pair<int, int>> q;

    q.push({x1, y1});
    visited.insert({x1, y1});

    int stp = 0;

    while (!q.empty()) {
        int size = q.size();
        for (int i = 0; i < size; i++) {
            int x = q.front().first, y = q.front().second;
            q.pop();

            if (x == x2 && y == y2) return stp;

            for (int j = 0; j < 8; j++) {
                int nx = x + dirx[j], ny = y + diry[j];
                if (nx >= 1 && nx <= 1e+9 && ny >= 1 && ny <= 1e+9 && isValid(nx, ny, vec) && visited.find({nx, ny}) == visited.end()) {
                    q.push({nx, ny});
                    visited.insert({nx, ny});
                }
            }
        }
        stp++;
    }
    return -1;
}

int main() {
    faster;
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> n;
    vector<vector<int>> vec(n, vector<int>(3));
    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        vec[i][0] = a;
        vec[i][1] = b;
        vec[i][2] = c;
    }
    int res = steps(x1, y1, x2, y2, vec);
    cout << res;

    return 0;
}
