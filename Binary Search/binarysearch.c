#include<stdio.h>

// Function to perform binary search
void binarysearch(int arr[], int len) {
    int x, left, right;
    printf("\nEnter the element to search\n");
    scanf("%d", &x);
    left = 0;
    right = len - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; 

        if (arr[mid] < x) {
            left = mid + 1;
        } else if (arr[mid] == x) {
            printf("Element found\n");
            return;
        } else {
            right = mid - 1;
        }
    }
    printf("Element not found\n");
}

int main() {
    int len, i, j, temp;
    printf("Enter the length of the array\n");
    scanf("%d", &len);
    int arr[len];

    printf("Enter the array elements\n");
    for (i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble sort to sort the array
    for (i = 0; i < len - 1; i++) {
        for (j = 0; j < len - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted array \n");
    for (i = 0; i < len; i++) {
        printf("%d \t", arr[i]);
    }

    binarysearch(arr, len);
    return 0;
}
