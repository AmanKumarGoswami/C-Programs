/**
 * WAP to find reverse of an array.
 */

 #include<stdio.h>
 #define maxSize 1000

 int main()
 {
     int arr1[maxSize], i, size;
     printf("Enter the size of an array :");
     scanf("%d", &size);

     printf("Enter the elements in an array :");
     for(i=1;i<=size;i++)
        scanf("%d", &arr1[i]);

     printf("\nReverse of an array :");
     for(i=size;i>=1;i--)
        printf("%d\n", arr1[i]);

     return 1;
 }
