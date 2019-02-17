/**
 * WAP to find multiplication of two matrices.
 */

 #include<stdio.h>
 #define max_size 10

 int main()
 {
     int arr1[max_size][max_size], arr2[max_size][max_size], mult[max_size][max_size], i, j, k, sum, row1, col1, row2, col2;
     printf("Enter the number of row in first matrix :");
     scanf("%d", &row1);
     printf("Enter the number of column in first matrix :");
     scanf("%d", &col1);

     printf("Enter the number of row in second matrix :");
     scanf("%d", &row2);
     printf("Enter the number of column in second matrix :");
     scanf("%d", &col2);

     if(col1 == row2)
     {
         printf("Enter elements of first matrix :\n");
         for(i=0; i<row1; i++)
            for(j=0; j<col1; j++)
                scanf("%d", &arr1[i][j]);


         printf("Enter elements of second matrix :\n");
         for(i=0; i<row2; i++)
            for(j=0; j<col2; j++)
                scanf("%d", &arr2[i][j]);

        for(i=0; i<row1; i++)
            for(j=0; j<col2; j++)
         {
             sum = 0;
             for(k=0; k<col1; k++)
                sum = sum + arr1[i][k] * arr2[k][j];
             mult[i][j] = sum;
         }


         printf("Multiplication of two matrices :\n");
         for(i=0; i<row1; i++){
            for(j=0; j<col2; j++)
                printf("%d\t", mult[i][j]);
            printf("\n");
         }
     }
     else
        printf("Matrix multiplication is not possible.");

     return 1;
 }
