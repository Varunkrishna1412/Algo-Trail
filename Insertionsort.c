#include<stdio.h>

void insertionSo(int arr[], int n)
{
    int i,j,temp;
    for ( i = 1; i < n; i++) 
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
}

int main()
{
    int n,i;
    printf("Enter the limit for the array:");
    scanf("%d",&n);
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        printf("Elements %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    insertionSo(arr,n);
    printf("The array elements after sorting are:\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
       
    }
  
    return 0;
}