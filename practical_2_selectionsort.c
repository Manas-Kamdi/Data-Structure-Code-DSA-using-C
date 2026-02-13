// Write a C program to sort elements using Selection Sort method.
#include <stdio.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n], i, j, min, temp;
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Array before Selection Sort:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    // Selection Sort Algorithm
    for (i = 0; i < n - 1; i++) {
        min = a[i];
        temp=i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < min) {
                min = a[j];
                temp = j;
            }
        }
        a[temp] = a[i];
        a[i] = min;
    }
    printf("\nArray after Selection Sort:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}