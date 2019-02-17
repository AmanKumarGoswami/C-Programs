/**
 * WAP to find sum of all array elements.
 */

 #include<stdio.h>
 #define maxSize 100

 int main()
 {
     int i, sum=0,arr[maxSize], n;
     printf("Enter the size of an array :");
     scanf("%d",&n);

     printf("Enter the elements in an array :");
     for(i=0;i<n;i++)
        scanf("%d", &arr[i]);

     for(i=0;i<n;i++)
        sum = sum + arr[i];
    printf("Sum of elements of an array : %d",sum);
    return 1;

 }
