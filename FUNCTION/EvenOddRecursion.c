/**
 * WAP to print all even or odd numbers from 1 to N using recursion.
 */
 int evenOdd(int m,int n);
 #include<stdio.h>
 int main()
 {
     int number,m=1;
     printf("Enter the number :");
     scanf("%d",&number);
     evenOdd(m,number);
     return;
 }

 int evenOdd(int m,int n)
 {
     if (m>n)
        return;
     else
     {
         if(m%2==0)
            printf("\nEven : %d",m);
        else
            printf("\nOdd  : %d",m);
            evenOdd(m+1,n);
     }
 }
