/**
 * WAP to read and print elements of array.
 */

 #include<stdio.h>
 #define maxSize 100

 int main()
 {
     int i, n, arr[maxSize];

     printf("Enter the size of an array :");
     scanf("%d", &n);

     printf("Enter the elements of an array : ");
     for(i=1;i<=n;i++)
        scanf("%d", &arr[i]);


     printf("Elements inside an array :");
     for(i=1;i<=n;i++)
     printf("%d\n", arr[i]);

     return 1;
 }
