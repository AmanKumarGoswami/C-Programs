/**
 * WAP to count even and odd number in an array.
 */

 #include<stdio.h>
 #define maxSize 1000

 int main()
 {
     int i, size, arr[maxSize], count1=0, count2=0;
     printf("Enter the size of an array :");
     scanf("%d", &size);

     printf("Enter the elements in an array :");
     for(i=1;i<=size;i++)
        scanf("%d", &arr[i]);

     for(i=1;i<=size;i++)
     {
            if(arr[i]%2==0){
                printf("%d is even.\t",arr[i]);
                count1++;
                }
            else{
                printf("%d is odd\t",arr[i]);
                count2++;
                }
     }
     printf("\n\nTheir are total %d even and %d odd element in an array.\n\n",count1,count2);
     return 1;
 }
