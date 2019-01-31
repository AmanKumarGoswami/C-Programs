/**
 * WAP to print all Prime numbers between 1 to n.
 */

 #include<stdio.h>
 int main()
 {
    int i,j;
    printf("2 is a prime number.\n");
    printf("3 is a prime number.");
    for (i=2;i<=100;i++)
    {
    for (j=2;j<=i/2;j++)
        if (i % j == 0)
        {
            break;
        }
        else
        {
            printf("\n%d is a prime number.",i);
            break;
        }
    }
    return 1;
 }
