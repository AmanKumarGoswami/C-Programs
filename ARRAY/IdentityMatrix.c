/**
 * WAP to check entered matrix in an identity matrix or not.
 */

 #include<stdio.h>
 #define max_size 10
 int main()
 {
     int arr1[max_size][max_size], i, j, row, col;

     printf("Enter the number of row in a matrix :");
     scanf("%d", &row);
     printf("Enter the number of column in a matrix :");
     scanf("%d", &col);

     if (row == col)
    {
     printf("\nEnter the elements of matrix :");
     for(i=0; i<row; i++)
        for(j=0; j<col; j++)
            scanf("%d", &arr1[i][j]);

     for(i=0; i<row; i++)
        for(j=0; j<col; j++)
            {
                if(i==j)
                    if(arr1[i][j]!=1){
                        printf("\nEntered matrix is not an identity matrix.");
                        return;
                    }
            }

     printf("\n\nEntered matrix is an identity matrix :\n\n");
     for(i=0; i<row; i++){
        for(j=0; j<col; j++)
            printf("%d\t", arr1[i][j]);
        printf("\n");
        }
    }
    else
        printf("\n\nIt is not an identity matrix.");

    return 1;
 }

