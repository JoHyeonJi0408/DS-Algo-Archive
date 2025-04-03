#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> graph;
vector<bool> visited;

void dfs(int node) {
    visited[node] = true;
    cout << node << " ";

    for (int next : graph[node]) {
        if (!visited[next]) {
            dfs(next);
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

    cout << "DFS 탐색 순서: ";
    dfs(0); // 0 1 3 4 2
    return 0;
}
