#include <stdio.h>

int main() {
    int arr[100]; //Taking array of capacity 100
    int size, newElement;

    printf("Enter number of elements : ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the last element to be added
    printf("Enter the last element to be added: ");
    scanf("%d", &newElement);

    // Insert the new element at the end
    arr[size] = newElement;
    size++; // Increase the size

    // Display the final array
    printf("Array after inserting the last element: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}