/**
 * WAP to find sum of upper triangular matrix.
 */

 #include<stdio.h>
 #define max_size 10

 int main()
 {
     int arr1[max_size][max_size], i , j, row, col, isUpper, sum=0;

     printf("\nEnter the size of row of a matrix :");
     scanf("%d", &row);
     printf("\nEnter the size of col of a matrix :");
     scanf("%d", &col);

     printf("Enter the elements of a %dx%d matrix", row, col);
     for(i=0; i<row; i++)
        for(j=0; j<col; j++)
            scanf("%d", &arr1[i][j]);

     if(row==col)
     {
         for(i=0; i<row; i++)
            for(j=0; j<col; j++)
            {
                 if(j<i){
                    continue;
                 }
                sum = sum + arr1[i][j];
            }
        printf("\nEntered matrix is :\n");
        for(i=0; i<row; i++){
            for(j=0; j<col; j++)
                printf("%d\t", arr1[i][j]);
            printf("\n");
        }
        printf("\n\nThe sum of upper triangular matrix : %d\n", sum);
     }
     else
        printf("\nUpper triangular matrix not possible.\n");

     return 1;
 }
