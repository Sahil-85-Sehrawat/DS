#include <stdio.h>

void delete(int arr[], int *n, int pos) {
    if (pos < 0 || pos >= *n) {
        printf("Invalid position!\n");
        return;
    }
    
    for (int i = pos; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*n)--;
}

int main() {
    int arr[50];  // Declare an array of size 50 (you can change it as needed)
    int n, pos;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n > 50) {
        printf("Array size cannot be greater than 50.\n");
        return -1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position (0 to %d) where you want to delete an element: ", n - 1);
    scanf("%d", &pos);

    delete(arr, &n, pos);

    printf("Array after deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
