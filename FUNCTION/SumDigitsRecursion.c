/**
 * WAP to find sum of digits of a given number using recursion.
 */

 #include<stdio.h>

 int sumDigits(int num);
 int sum=0;
 int main()
 {
     int number;
     printf("Enter the number :");
     scanf("%d",&number);
     printf("Sum of digits of a number %d is %d",number,sumDigits(number));
     return 1;
 }

 int sumDigits(int num)
 {
     int n=num;
     if(num>0)
     {
        n = num % 10;
        sum = sum + n;
        sumDigits(num/10);
     }
     return sum;
 }
