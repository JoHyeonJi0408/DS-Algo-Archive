#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 5; // 정점의 개수

    vector<vector<int>> adj(n);

    // 방향 간선 추가
    adj[0].push_back(1); // 0 -> 1
    adj[0].push_back(2); // 0 -> 2
    adj[1].push_back(3); // 1 -> 3
    adj[2].push_back(4); // 2 -> 4

    cout << "방향 그래프의 인접 리스트:" << endl;

    for (int i = 0; i < n; ++i) {
        cout << i << ": ";

        for (int neighbor : adj[i]) {
            cout << neighbor << " ";
        }

        cout << endl;
    }

    return 0;
}
