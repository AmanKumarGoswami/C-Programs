/**
 * WAP to print all negative elements in an array.
 */

 #include<stdio.h>
 #define maxSize 1000

 int main()
 {
     int i, size, arr[maxSize];
     printf("Enter the size of an array :");
     scanf("%d", &size);

     printf("Enter the elements in an array :");
     for(i=1;i<=size;i++)
        scanf("%d", &arr[i]);

     for(i=1;i<=size;i++)
     {
         if(arr[i]<0)
            printf("\n%d",arr[i]);
     }
     return 1;
 }
