/**
 * WAP to search an element in an array.
 * Binary Search
 */

 #include<stdio.h>
 #define maxSize 1000

 int main()
 {
     int arr[maxSize], i, size, search, first, last, middle;
     printf("Enter the size of an array :");
     scanf("%d", &size);

     printf("Enter the elements in an array in ascending:");
     for(i=1;i<=size;i++)
        scanf("%d", &arr[i]);

     printf("\nEnter the number to be searched :");
     scanf("%d", &search);

     first = 1;
     last = size;
     middle = (first + last)/2;

     while(first<=last)
    {
     if(arr[middle]==search)
    {
        printf("%d is found at %d.",search,middle);
        break;
    }
    else if(search>arr[middle])
    {
        first=middle + 1;
        middle=(first + last) / 2;
    }
    else
    {
        last=middle - 1;
        middle=(first+last)/2;
    }
    }

    if(first > last)
            printf("%d not found.",search);
    return 1;
 }
