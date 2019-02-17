/**
 * WAP to  perform Scalar matrix multiplication
 */

  #include<stdio.h>
 #define max_size 10

 int main()
 {
     int arr1[max_size][max_size], arr2[max_size][max_size], i, j, row1, col1, num;
     printf("Enter the number of row in matrix :");
     scanf("%d", &row1);
     printf("Enter the number of column in matrix :");
     scanf("%d", &col1);

     printf("Enter elements of first matrix :\n");
     for(i=0; i<row1; i++)
        for(j=0; j<col1; j++)
            scanf("%d", &arr1[i][j]);

    printf("Enter the number to be multiplied with matrix : ");
    scanf("%d", &num);

    for(i=0; i<row1; i++){
        for(j=0; j<col1; j++)
            arr2[i][j]=num * arr1[i][j];
    }


    for(i=0; i<row1; i++){
        for(j=0; j<col1; j++)
            printf("%d\t", arr2[i][j]);
        printf("\n");
    }

     return 1;
 }
