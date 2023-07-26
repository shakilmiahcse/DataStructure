#include <iostream>
using namespace std;
int main() {
    int arr[] = {2, 3, 5, 8, 12};
    int target = 8;
    int size = sizeof(arr) / sizeof(arr[0]);
    int left = 0;
    int right = size - 1;
    int foundIndex = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        // Check if target is present at the middle index
        if (arr[mid] == target) {
            foundIndex = mid;
            break;
        }
        // If target is greater, ignore the left half
        if (arr[mid] < target) {
            left = mid + 1;
        }
        // If target is smaller, ignore the right half
        else {
            right = mid - 1;
        }
    }
    if (foundIndex != -1) {
        cout << "Element found at index " << foundIndex << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}

