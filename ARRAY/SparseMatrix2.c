/**
 * WAP to check sparse matrix.
 */

 #include<stdio.h>
 #define max_size 10

 int main()
 {
     //Variables declaration

     int arr1[max_size][max_size], arr2[max_size][max_size], i, j, row, col, k=0, count=0;

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
                if(arr1[i][j]!=0){
                arr2[k][0] = i;
                arr2[k][1] = j;
                arr2[k][2] = arr1[i][j];
                k++;
                count++;
                }
            }

      arr2[0][0] = row;
      arr2[0][1] = col;
      arr2[0][2] = count;
     printf("\nSparse matrix three column representation is :\n");
     for(i=0; i<k; i++){
        for(j=0; j<3; j++)
            printf("%d\t", arr2[i][j]);
        printf("\n");
     }


    return 1;
 }
