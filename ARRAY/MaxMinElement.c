/**
 * WAP to find maximum and minimum element in an array.
 */

 #include<stdio.h>
 #define maxSize 1000

 int main()
 {
     int arr[maxSize], n, i;
     printf("Enter the size of an array : ");
     scanf("%d", &n);

     printf("Enter the element in an array :");
     for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

     int max = arr[0];
     int min = arr[0];

      for(i=1;i<n;i++)
      {
          if(arr[i] > max)
          {
               max = arr[i];
          }
          if(arr[i] < min)
          {
               min = arr[i+1];
          }
      }
      printf("Minimum value in an array :%d ",min);
      printf("\nMaximum value in an array :%d\n",max);
      return 1;
 }
