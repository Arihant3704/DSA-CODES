#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key = 6;
    int found = 0; // Flag to indicate if key is found

    // Linear search
    for (int i = 0; i < 10; i++) {
        if (arr[i] == key) {
            found = 1; // Key found
            break;
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
