/**
 * WAP to find factorial of a given number using recursion.
 */

 #include<stdio.h>

 int factorial(int num);

 int main()
 {
     int number;
     printf("Enter the number : ");
     scanf("%d",&number);
     printf("Factorial of a given number is %d",factorial(number));
     return 1;
 }

 int factorial(int num)
 {
     if(num==0)
        return 1;
     else
        num = num*factorial(num-1);
     return num;
 }
