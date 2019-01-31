/**
 * WAP to print all natural number between 1 to n using recursion.
 */

 #include<stdio.h>

 int fun(int,int);
 int main()
 {
     int lowerLimit=1,upperLimit;
     printf("Enter the value of Upper Limit : ");
     scanf("%d",&upperLimit);
     fun(lowerLimit,upperLimit);
     return 0;
 }

 int fun (int lowerLimit,int upperLimit)
 {
      if(lowerLimit>upperLimit)
            return;
      printf("%d\n",lowerLimit);
      fun(lowerLimit+1,upperLimit);

 }
