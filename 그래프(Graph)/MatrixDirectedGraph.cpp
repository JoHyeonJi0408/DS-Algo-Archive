#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 5; // 정점의 개수

    vector<vector<int>> adj(n, vector<int>(n, 0)); // 0으로 초기화

    // 방향 간선 추가
    adj[0][1] = 1; // 0 -> 1
    adj[0][2] = 1; // 0 -> 2
    adj[1][3] = 1; // 1 -> 3
    adj[2][4] = 1; // 2 -> 4

    cout << "방향 그래프의 인접 행렬:" << endl;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
