#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1, mid;

    while (low <= high) {
        mid = low + (high - low) / 2; 

        if (arr[mid] == key) {
            return mid;  
        }
        else if (arr[mid] > key) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return -1;  
}

int main() {
    int arr[50];  
    int n, key, result;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n > 50 || n <= 0) {
        printf("Invalid number of elements! Please enter a number between 1 and 50.\n");
        return 1;
    }

    printf("Enter %d elements (array should be sorted in ascending order):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to search for: ");
    scanf("%d", &key);

    result = binarySearch(arr, n, key);

    if (result != -1) {
        printf("Element %d found at index %d.\n", key, result);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
