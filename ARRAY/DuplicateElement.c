/**
 * WAP to count total number of duplicate element in an array.
 */

 #include<stdio.h>
 #define maxSize 1000

 int main()
 {
     int arr[maxSize], i, size, j, count=0;
     printf("Enter the size of an array :");
     scanf("%d", &size);

     printf("Enter the elements in an array :");
     for(i=1; i<=size; i++)
        scanf("%d",&arr[i]);

     for(j=1;j<size;j++)
     {
     for(i=j+1;i<=size;i++)
     {
         if(arr[j]==arr[i])
         {
            count++;
            break;
         }
     }
     }

        printf("\n\nTotal number of duplicate elements in an array are %d",count);

    return 1;

 }
