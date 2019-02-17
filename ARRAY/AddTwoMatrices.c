/**
 * WAP to add two matrices.
 */

 #include<stdio.h>

 int main()
 {
     int arr1[10][10], arr2[10][10], arr3[10][10], i, row, column, j;
     printf("Enter the number of rows in an array :");
     scanf("%d", &row);
     printf("Enter the number of column in an array :");
     scanf("%d", &column);


     printf("Enter the elements in an array 1:");
     for(i=1;i<=row;i++)
        for(j=1;j<=column;j++)
            scanf("%d", &arr1[i][j]);

     printf("Enter the elements in an array 2:");
     for(i=1;i<=row;i++)
        for(j=1;j<=column;j++)
            scanf("%d", &arr2[i][j]);

     for(i=1;i<=row;i++)
        for(j=1;j<=column;j++)
            arr3[i][j] = arr1[i][j] + arr2[i][j];

     printf("After addition of array1 and array2 :\n");
     for(i=1;i<=row;i++){
        for(j=1;j<=column;j++){
            printf("%d\t", arr3[i][j]);
        }
        printf("\n");
     }
     return 1;

 }
