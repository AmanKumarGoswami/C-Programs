/**
 * WAP to find whether the entered matrix is an upper triangular matrix.
 */

 #include<stdio.h>
 #define max_size 10

 int main()
 {
     int arr1[max_size][max_size], i , j, row, col, isUpper;

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
         isUpper = 1;
         for(i=0; i<row; i++)
            for(j=0; j<col; j++)
            {
                 if(j<i && arr1[i][j]!=0)
                    isUpper = 0;
            }

        if(isUpper == 1){
        printf("\nEntered matrix is an upper triangular matrix.\n");
        for(i=0; i<row; i++){
            for(j=0; j<col; j++)
                printf("%d\t", arr1[i][j]);
            printf("\n");
        }
        }
        else
            printf("It is not a upper triangular matrix.");
     }
     else
        printf("Upper triangular matrix not possible.");

     return 1;
 }
