//Write a C program to sort elements using Bubble Sort technique.

#include <stdio.h>

int main(){
    int n;
    printf("Enter number of elements in an array: ");
    scanf("%d", &n);
    int a[n], i, j, temp;
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("Array Before Bubble Sort:\n");
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    // Bubble Sort Algorithm
    for(i = 0; i < n-1; i++){
        for(j = 0; j < n-i-1; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("\nArray after Bubble Sort:\n");
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}