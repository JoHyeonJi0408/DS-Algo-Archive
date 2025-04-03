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
    int V = 5; // ��� ����
    graph.resize(V);
    visited.resize(V, false);

    // �׷��� ���� (0-1, 0-2, 1-3, 1-4, 2-4)
    graph[0] = { 1, 2 };
    graph[1] = { 0, 3, 4 };
    graph[2] = { 0, 4 };
    graph[3] = { 1 };
    graph[4] = { 1, 2 };

    cout << "DFS Ž�� ����: ";
    dfs(0); // 0 1 3 4 2
    return 0;
}
