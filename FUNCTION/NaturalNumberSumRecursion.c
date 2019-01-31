/**
 * WAP to find sum of all natural numbers in given range using array.
 */

 #include<stdio.h>

 int naturalSum(int lowerLimit,int upperLimit);

 int main()
 {
     int lowerLimit,upperLimit;
     printf("\nEnter the value of lower limit :");
     scanf("%d",&lowerLimit);
     printf("\nEnter the value of upper limit :");
     scanf("%d",&upperLimit);

     printf("Sum of natural numbers from %d to %d : %d\n",lowerLimit,upperLimit,naturalSum(lowerLimit,upperLimit));
     return 1;

 }
 int sum = 0;
 int naturalSum(int lowerLimit,int upperLimit)
 {

     if(lowerLimit>upperLimit)
        return;
     sum = sum + lowerLimit;
     naturalSum(lowerLimit+1,upperLimit);
     return sum;
 }
