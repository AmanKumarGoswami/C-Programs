/**
 * WAP to search an element in an array.
 */

 #include<stdio.h>
 #define maxSize 1000

 int main()
 {
     int arr[maxSize], size, i, search;

     printf("\nEnter the size of an array :");
     scanf("%d", &size);

     printf("\nEnter the elements in an array :");
     for(i=1;i<=size;i++)
        scanf("%d", &arr[i]);

     printf("\nEnter the element to be searched :");
     scanf("%d", &search);

     for(i=1;i<=size;i++)
     {
         if(search==arr[i])
         {
             printf("\n%d is found at %d position.",search,i);
             break;
         }
     }
     if(i!=search)
      printf("\n%d is not found in the array.",search);

    return 1;
 }
