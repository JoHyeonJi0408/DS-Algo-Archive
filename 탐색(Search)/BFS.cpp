#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> graph;
vector<bool> visited;

void bfs(int start) {
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";

        for (int next : graph[node]) {
            if (!visited[next]) {
                visited[next] = true;
                q.push(next);
            }
        }
    }
}

int main() {
    int V = 5; // 노드 개수
    graph.resize(V);
    visited.resize(V, false);

    // 그래프 생성 (0-1, 0-2, 1-3, 1-4, 2-4)
    graph[0] = { 1, 2 };
    graph[1] = { 0, 3, 4 };
    graph[2] = { 0, 4 };
    graph[3] = { 1 };
    graph[4] = { 1, 2 };

    cout << "BFS 탐색 순서: ";
    bfs(0); // 0 1 2 3 4
    return 0;
}
