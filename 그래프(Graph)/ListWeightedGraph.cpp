#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 5; // 정점의 개수

    vector<vector<pair<int, int>>> adj(n); // {연결된 정점, 가중치}

    // 가중치 간선 추가 (무방향)
    adj[0].push_back({ 1, 2 });
    adj[1].push_back({ 0, 2 });

    adj[0].push_back({ 2, 3 });
    adj[2].push_back({ 0, 3 });

    adj[1].push_back({ 3, 4 });
    adj[3].push_back({ 1, 4 });

    adj[2].push_back({ 4, 1 });
    adj[4].push_back({ 2, 1 });

    cout << "가중치 무방향 그래프의 인접 리스트:" << endl;

    for (int i = 0; i < n; ++i) {
        cout << i << ": ";

        for (const auto& edge : adj[i]) {
            cout << "(" << edge.first << ", " << edge.second << ") ";
        }

        cout << endl;
    }

    return 0;
}
