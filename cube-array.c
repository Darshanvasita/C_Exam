#include <stdio.h>

int main() {
    int num;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &num);

    int arr[num];
    printf("Enter %d elements:\n", num);
    for (int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The cubes of the array elements are:\n");
    for (int i = 0; i < num; i++) {
        int *ptr = &arr[i];
        printf("%d ", (*ptr) * (*ptr) * (*ptr));
    }

    return 0;
}
