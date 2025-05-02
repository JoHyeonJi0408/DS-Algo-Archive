#include <iostream>
#include <vector>

using namespace std;

const int INF = 1e9; // 연결되지 않은 경우 큰 값으로 표현

int main() {
    int n = 5; // 정점의 개수

    vector<vector<int>> adj(n, vector<int>(n, INF)); // INF로 초기화 (자기 자신은 0)
    for (int i = 0; i < n; ++i) {
        adj[i][i] = 0;
    }

    // 가중치 간선 추가 (무방향)
    adj[0][1] = 2;
    adj[1][0] = 2;

    adj[0][2] = 3;
    adj[2][0] = 3;

    adj[1][3] = 4;
    adj[3][1] = 4;

    adj[2][4] = 1;
    adj[4][2] = 1;

    cout << "가중치 무방향 그래프의 인접 행렬:" << endl;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (adj[i][j] == INF) {
                cout << "INF ";
            }
            else {
                cout << adj[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
