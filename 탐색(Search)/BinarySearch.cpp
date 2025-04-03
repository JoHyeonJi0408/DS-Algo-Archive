#include <iostream>
#include <vector>
using namespace std;

bool binarySearch(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return true;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return false;
}

bool binarySearchRecursive(vector<int>& arr, int left, int right, int target) {
    if (left > right) {
        return false;
    }

    int mid = left + (right - left) / 2;

    if (arr[mid] == target) {
        return true;
    }

    if (arr[mid] < target) {
        return binarySearchRecursive(arr, mid + 1, right, target);
    }

    return binarySearchRecursive(arr, left, mid - 1, target);
}


int main() {
    vector<int> arr = { 1, 3, 5, 7, 9, 11 }; // ���ĵ� �迭

    cout << (binarySearch(arr, 5) ? "ã�Ҵ�!" : "����!") << endl;
    cout << (binarySearchRecursive(arr, 0, arr.size() - 1, 5) ? "ã�Ҵ�!" : "����!") << endl;

    return 0;
}
