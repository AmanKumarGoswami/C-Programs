/**
 * WAP to find sum of each row and column of a matrix.
 */

 #include<stdio.h>
 #define max_size 10

 int main()
 {
     int arr1[max_size][max_size], i ,j ,sumRow=0, sumCol=0, row, col;

     printf("Enter the number of rows in a matrix : ");
     scanf("%d", &row);
     printf("\nEnter the number of columns in a matrix : ");
     scanf("%d", &col);

     printf("\nEnter the elements of a matrix : ");
     for(i=1; i<=row; i++)
        for(j=0; j<col; j++)
             scanf("%d", &arr1[i][j]);

     for(i=1; i<=row; i++){
        for(j=0; j<col; j++)
        {
            sumRow = sumRow + arr1[i][j];
        }
        printf("\nSum of Row %d : %d", i, sumRow);
        sumRow = 0;
     }


     for(j=0; j<col; j++){
        for(i=1; i<=row; i++)
        {
            sumCol = sumCol+ arr1[i][j];
        }
        printf("\nSum of Column %d : %d", i, sumCol);
        sumCol = 0;
     }

     return 1;
 }
