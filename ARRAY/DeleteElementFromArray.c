/**
 * WAP to delete an elements in an array.
 */

 #include<stdio.h>
 #include<stdlib.h>
 #define maxSize 1000

 int main()
 {
     int arr[maxSize], i, size, pos;
     printf("Enter the size of an array : ");
     scanf("%d", &size);

     printf("Enter the elements in an array :");
     for(i=1;i<=size;i++)
        scanf("%d", &arr[i]);

    printf("Enter the element position :");
    scanf("%d", &pos);
    if(pos > size+1 || pos <= 0)
    {
        printf("Invalid position! Please enter position between 1 to %d", size);
    }
    else
    {
    for(i=pos; i<=size; i++)
        {
            arr[i] = arr[i + 1];
        }

        /* Decrement array size by 1 */
        size--;

    for(i=1;i<=size;i++)
        printf("%d\n",arr[i]);

 }
 }
