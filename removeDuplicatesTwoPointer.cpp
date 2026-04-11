#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n) {
    if (n == 0) return 0;

    int slow = 0;

    for (int fast = 1; fast < n; fast++) {
        if (arr[fast] != arr[slow]) {
            slow++;
            arr[slow] = arr[fast];
        }
    }

    return slow + 1; 
}

int main() {
    int arr[] = {1, 1, 2, 2, 3};
    int n = 5;

    int newLength = removeDuplicates(arr, n);

    cout << "length: " << newLength << endl;
    cout << "array: ";

    for (int i = 0; i < newLength; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
