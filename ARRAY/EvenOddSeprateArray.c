/**
 * WAP to put even and odd elements of array in two separate array.
 */


 #include<stdio.h>
 #define maxSize 1000

 int main()
 {
     int arr1[maxSize], i, size, arrEv[maxSize], chk, arrOd[maxSize];
     int j=1 ,k=1;
     printf("Enter the size of an array :");
     scanf("%d", &size);

     printf("Enter the elements in an array :\n");
     for(i=1;i<=size;i++){
        printf("Enter element  %d:",i);
        scanf("%d", &arr1[i]);
     }
     for(i=1;i<=size;i++)
     {
         chk = (arr1[i]%2==0);
         switch(chk)
         {
         case 1:
            {
                arrEv[j]=arr1[i];
                j++;
                break;
            }
         case 0:
            {
                arrOd[k]=arr1[i];
                k++;
                break;
            }
         }
     }
     printf("\nEven numbers :");
     for(i=1;i<j;i++)
        printf("\n%d", arrEv[i]);

     printf("\nOdd numbers :");
     for(i=1;i<k;i++)
        printf("\n%d", arrOd[i]);

    return 1;
 }
