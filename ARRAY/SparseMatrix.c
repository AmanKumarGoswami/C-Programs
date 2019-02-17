/**
 * WAP to check sparse matrix.
 */

 #include<stdio.h>
 #define max_size 10

 int main()
 {
     //Variables declaration

     int arr1[max_size][max_size], i, j, row, col, count=0;

     /*
      * User input to find the order of a matrix
      */

     printf("\nEnter the number of row of matrix : ");
     scanf("%d", &row);
     printf("\nEnter the number of columns of a matrix :");
     scanf("%d", &col);

     /*
      * Elements insertion inside a matrix
      */

     printf("Enter the elements of a matrix : ");
     for(i=0; i<row; i++)
        for(j=0; j<col; j++)
            scanf("%d", &arr1[i][j]);

     for(i=0; i<row; i++)
        for(j=0; j<col; j++)
            {
                if(arr1[i][j]==0)
                    count++;
            }
     /*
      * Matrix Printing
      */

     for(i=0; i<row; i++){
        for(j=0; j<col; j++)
            printf("%d\t", arr1[i][j]);
        printf("\n");
     }

    if(count > ( row * col ) / 2)
        printf("\nEntered matrix is a sparse matrix.");
    else
        printf("\nEntered matrix is not a sparse matrix.");

    return 1;
 }
