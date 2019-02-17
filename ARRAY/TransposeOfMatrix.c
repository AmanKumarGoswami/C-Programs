/**
 * WAP to find transpose of a matrix.
 */

 #include<stdio.h>
 #define max_size 10
 int main()
 {
     int arr1[max_size][max_size], i, j, row, col, arr2[max_size][max_size];

     printf("\nEnter the number of row in a matrix : ");
     scanf("%d", &row);
     printf("\nEnter the number of columns in a matrix : ");
     scanf("%d", &col);

     printf("\nEnter the elements of matrix :");
     for(i=0; i<row; i++)
        for(j=0; j<col; j++)
            scanf("%d" ,&arr1[i][j]);

     for(i=0; i<row; i++)
        for(j=0; j<col; j++)
            arr2[j][i] = arr1[i][j];

    for(i=0; i<col; i++){
        for(j=0; j<row; j++)
            printf("%d\t", arr2[i][j]);
        printf("\n");
    }
    return 1;
 }
