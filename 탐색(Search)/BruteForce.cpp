#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = { 3, 1, 4, 1, 5, 9 };
    int target = 4;
    bool found = false;

    for (int num : arr) {
        if (num == target) {
            found = true;
            break;
        }
    }
    cout << (found ? "찾았다!" : "없다!") << endl;
    return 0;
}
