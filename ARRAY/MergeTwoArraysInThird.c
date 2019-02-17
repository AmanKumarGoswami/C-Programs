/**
 * WAP to merge two arrays in third array.
 */

 #include<stdio.h>
 #define maxSize 1000

 int main()
 {
     int arr1[maxSize], arr2[maxSize], arr3[maxSize], i, size1, size2;

     printf("Enter the size of first array :");
     scanf("%d", &size1);

     printf("Enter the elements in first array :");
     for(i=1;i<=size1;i++)
        scanf("%d", &arr1[i]);

     printf("Enter the size of second array :");
     scanf("%d", &size2);

     printf("Enter the elements in second array :");
     for(i=1;i<=size2;i++)
        scanf("%d", &arr2[i]);

     for(i=1;i<=size1;i++)
     {
         arr3[i]=arr1[i];
     }

     for(i=1;i<=size2;i++)
     {
         arr3[size1+i]=arr2[i];
     }

     printf("\nAfter merging two arrays in third array:");
     for(i=1;i<=size1+size2;i++)
        printf("\n%d", arr3[i]);

     return 1;
 }
