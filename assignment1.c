#include<stdio.h>
void main()
{
    int arr[100];
    int n,i,max,min;
    printf("Enter the total number of the elements\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    printf("The maximum element in the array is: %d\n",max);
    printf("\nThe minimum element in the array is: %d",min);
}