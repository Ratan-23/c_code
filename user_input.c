#include <stdio.h>

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Declare an array of the specified size
    int my_array[size];

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &my_array[i]);
    }

    printf("The elements in the array are: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", my_array[i]);
    }
    printf("\n");

    return 0;
}