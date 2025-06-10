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

void sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int size;

    printf("Enter number of elements: ");
    if (scanf("%d", &size) != 1 || size <= 0)
    {
        printf("Invalid size\n");
        return 1;
    }

    int arr[size];
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; ++i)
    {
        scanf("%d", &arr[i]);
    }

    sort(arr, size);

    int key;
    printf("Enter element to search: ");
    scanf("%d", &key);

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
