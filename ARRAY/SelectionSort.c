/**
 * WAP to sort an array elements in ascending order.
 */

 #include<stdio.h>
 #define maxSize 1000

 int main()
 {
     int arr[maxSize], i, size, j, temp;

     printf("Enter the size of an array :");
     scanf("%d", &size);

     printf("Enter the elements in an array :");
     for(i=1;i<=size;i++)
        scanf("%d", &arr[i]);

     for(i=1;i<size;i++)
     {
        for(j=i+1;j<=size;j++)
     {
         if(arr[i]>arr[j])
         {
             temp = arr[i];
             arr[i] = arr[j];
             arr[j] = temp;
         }
     }
     }

     printf("After sorting :\n\n");
     for(i=1;i<=size;i++)
     printf("%d\t",arr[i]);

     return 1;

 }
