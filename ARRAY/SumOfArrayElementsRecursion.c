/**
 * WAP to find sum of all array elements - using recursion.
 */

 #include<stdio.h>
 #define maxSize 100

 int sumArray(int arr[], int n, int m);

 int main()
 {
     int i, sum=0,arr[maxSize], n;
     printf("Enter the size of an array :");
     scanf("%d",&n);

     printf("Enter the elements in an array :");
     for(i=0;i<n;i++)
        scanf("%d", &arr[i]);

     printf("Sum of element of an array : %d",sumArray(arr,0,n));
     return 1;
 }
 int sum = 0;
 int sumArray(int arr[], int n, int m)
 {
     if(n>m)
         return sum;
     sum = sum + n;
     sumArray(arr, n+1, m);

 }
