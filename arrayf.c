// Operations on array 
#include<stdio.h>
int arr[50],n,i,num,pos;
//Creating an array
int create()
{
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("Enter the elements %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    return 0;   
}
//Traversing an array
int traverse()
{
    printf("The elements in the array are:");
    for ( i = 0; i < n; i++)
    {
        printf(" %d",arr[i]);
    }
    return 0;  
}
//Inserting an array
int insert()
{
    printf("Enter the element to insert: ");
    scanf("%d",&num);
    printf("Enter the position to insert: ");
    scanf("%d", &pos);
    for ( i = n-1; i>=pos-1; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=num;
    n++;
    return 0;
}
//Deleting an array
int delete()
{
  printf("Enter the position you want to delete: ");
  scanf("%d", &pos);
  if (pos<=0 || pos>n)
  {
    printf("Invalid Position");
  }
  else
  {
    for ( i = pos-1; i < n-1; i++)
    {
       arr[i+1]=arr[i]; 
    }
    n--;  
  }
  return 0;  
}
//Driver function
int main()
{
    int choice;
    while (1)
    {
        printf("\n1. Create ");
        printf("\n2. Traverse ");
        printf("\n3. Insert ");
        printf("\n4. Delete");
        printf("\n5. Exit");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
              create();
              break;
            case 2:
              traverse();
              break;
            case 3:
              insert();
              break;
            case 4:
              delete();
              break;
            case 5:
              return 0;
            default:
              printf("Your choice is invalid");
        }    
    }
     return 0;
}
