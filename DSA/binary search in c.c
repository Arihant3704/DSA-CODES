#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key = 6;
    int found = 0; // Flag to indicate if key is found

    // Binary search
    int low = 0;
    int high = 9; // Last index of the array
    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            found = 1; // Key found
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // Output
    if (found) {
        printf("Key found\n");
    } else {
        printf("Key not found\n");
    }

    return 0;
}
