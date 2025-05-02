#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 5; // 정점의 개수

    vector<vector<int>> adj(n, vector<int>(n, 0)); // 0으로 초기화

    // 간선 추가 (무방향)
    adj[0][1] = 1;
    adj[1][0] = 1;

    adj[0][2] = 1;
    adj[2][0] = 1;

    adj[1][3] = 1;
    adj[3][1] = 1;

    adj[2][4] = 1;
    adj[4][2] = 1;

    cout << "무방향 그래프의 인접 행렬:" << endl;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
