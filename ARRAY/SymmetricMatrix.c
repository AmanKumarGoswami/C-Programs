/**
 * WAP to check whether the entered matrix is symmetric matrix or not.
 */

 #include<stdio.h>
 #define max_size 10

 int main()
 {
     int arr1[max_size][max_size], transpose[max_size][max_size], i, j, row, col, flag=0;
     printf("\nEnter the number of row of a matrix : ");
     scanf("%d", &row);
     printf("\nEnter the number of column of a matrix : ");
     scanf("%d", &col);

     printf("\nEnter the elements in a matrix :\n");
     for(i=0; i<row; i++)
        for(j=0; j<col; j++)
            scanf("%d", &arr1[i][j]);

     for(i=0; i<row; i++)
        for(j=0; j<col; j++)
            transpose[j][i] = arr1[i][j];


    for(i=0; i<row; i++)
        for(j=0; j<col; j++)
          {
              if( transpose[i][j] != arr1[i][j] )
              {
                  flag = 1;
                  break;
              }
          }

    printf("\n\nMatrix : \n");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++)
            printf("%d\t", arr1[i][j]);
        printf("\n");
    }

    if(flag==0)
        printf("\nEntered matrix is a symmetric matrix.");
    else
        printf("\nEntered matrix is not a symmetric matrix.");

    return 1;
 }
