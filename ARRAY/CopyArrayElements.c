/**
 * WAP to copy all elements from an array to another array.
 */

 #include<stdio.h>
 #define maxSize 100

 int main()
 {
     int arr[maxSize], i, n, arr2[maxSize];

     printf("Enter the size of an array : ");
     scanf("%d", &n);

     printf("Enter elements in an array :");
     for(i=1;i<=n;i++)
        scanf("%d", &arr[i]);
     for(i=1;i<=n;i++)
     {
         arr2[i]=arr[i];
     }
     for(i=1;i<=n;i++)
        printf("\n%d", arr2[i]);
     return 1;
 }
