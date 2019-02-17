/**
 * WAP to find third largest element in an array.
 */

 #include<stdio.h>
 #include<limits.h>
 #define maxSize 1000

 int main()
 {
     int arr[maxSize], i, n, max1, max2,max3;
     printf("Enter the size of an array :");
     scanf("%d", &n);

     printf("Enter the elements in an array :");
     for(i=1;i<=n;i++)
        scanf("%d",&arr[i]);

     max1 = max2 = max3 = INT_MIN;
     for(i=1;i<=n;i++)
     {
         if(arr[i] > max1)
         {
             max3=max2;
             max2 =max1;
             max1=arr[i];
         }
          else if(arr[i]>max2 && arr[i]<max1)
          {
              max2=arr[i];
          }
          else if(arr[i]>max3 && arr[i]<max2)
          {
              max3=arr[i];
          }
     }
     printf("First largest number : %d", max1);
     printf("\nSecond largest number : %d", max2);
     printf("\nThird largest number : %d", max3);
 }
