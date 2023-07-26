#include <iostream>
using namespace std;
int main() {

    int arr[] = {5, 2, 8, 12, 3};
    int target = 8;
    int size = sizeof(arr) / sizeof(arr[0]);
    int foundIndex = -1;

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        cout << "Element found at index " << foundIndex << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}

