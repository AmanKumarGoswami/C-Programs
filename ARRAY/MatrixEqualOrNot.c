/**
 * WAP to check whether two matrices are equal or not.
 */

 #include<stdio.h>
 #define max_size 10

 int main()
 {
     int arr1[max_size][max_size], arr2[max_size][max_size], i, j, row1, col1, row2, col2;
     printf("\nEnter the number of row in first matrix :");
     scanf("%d", &row1);
     printf("\nEnter the number of column in first matrix :");
     scanf("%d", &col1);

     printf("\nEnter the number of row in second matrix :");
     scanf("%d", &row2);
     printf("\nEnter the number of column in second matrix :");
     scanf("%d", &col2);


    printf("\nEnter elements of first matrix :\n");
    for(i=0; i<row1; i++)
        for(j=0; j<col1; j++)
            scanf("%d", &arr1[i][j]);


    printf("\nEnter elements of second matrix :\n");
    for(i=0; i<row2; i++)
        for(j=0; j<col2; j++)
            scanf("%d", &arr2[i][j]);

     if(row1 == row2 && col1 == col2)
     {

        for(i=0; i<row1; i++)
            for(j=0; j<col1; j++)
                {
                    if(arr1[i][j]!=arr2[i][j])
                    {
                        printf("\nMatrices are not equal.");
                        return;
                    }
                }
        printf("Both matrices are same.\n\n");
        for(i=0;i<row1;i++){
            for(j=0;j<col1;j++)
                printf("%d\t", arr1[i][j]);
            printf("\n");
        }
     }
     else
        printf("Matrices are not equal.");

     return 1;
 }
