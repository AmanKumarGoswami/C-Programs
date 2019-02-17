/**
 * WAP to count negative elements in an array.
 */

 #include<stdio.h>
 #define maxSize 1000

 int main()
 {
     int i, size, arr[maxSize], count=0;
     printf("Enter the size of an array :");
     scanf("%d", &size);

     printf("Enter the elements in an array :");
     for(i=1;i<=size;i++)
        scanf("%d", &arr[i]);

     for(i=1;i<=size;i++)
     {
         if(arr[i]<0)
            count++;
     }

     printf("\nTheir are total %d negative element in an array.",count);
     return 1;
 }
