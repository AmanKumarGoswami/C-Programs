/**
 * WAP to find sum of main diagonal elements of a matrix.
 */

 #include<stdio.h>
 #define max_size 10

 int main()
 {
     int arr1[max_size][max_size], i, j, sum=0, row, col;

     printf("\nEnter the number of row in a matrix :");
     scanf("%d", &row);
     printf("\nEnter the number of columns in a matrix :");
     scanf("%d", &col);

     printf("\nEnter the elements of a matrix :\n");
     for(i=0; i<row; i++)
        for(j=0; j<col; j++)
            scanf("%d", &arr1[i][j]);

     for(i=0; i<row; i++)
        for(j=0; j<col; j++)
     {
         if(i == j)
            sum = sum + arr1[i][j];
     }

     printf("\nSum of diagonal elements of a matrix is %d", sum);

     return 1;

 }
