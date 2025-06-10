#include <stdio.h>

// Perform binary search on a sorted array.
// Returns the index of the key if found otherwise -1.
int binary_search(int arr[], int size, int key)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 6;

    int index = binary_search(arr, size, key);

    if (index != -1)
    {
        printf("Key found at index %d\n", index);
    }
    else
    {
        printf("Key not found\n");
    }

    return 0;
}
