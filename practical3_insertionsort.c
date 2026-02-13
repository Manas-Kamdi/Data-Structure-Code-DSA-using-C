#include <stdio.h>

int main()
{
    int n;
    printf("Enter the Size of an Array : \n");
    scanf("%d",&n);
    int arr[n],i,j;

    printf("Enter Elements Of an Array : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Array Elements Before Applying Insertion Sort : \n");

    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    int temp;
    for(i=1;i<n;i++)
    {
        temp=arr[i];
        j=i-1;

        while (j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
        
    } 
    printf("\n Array Elements After Applying Insertion Sort : \n");

    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}