#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int n = 7;
    int key = 10;

    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            cout << "Element found at index " << mid;
            return 0;
        }
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    cout << "Element not found";

    return 0;
}
