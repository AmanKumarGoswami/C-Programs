/**
 * WAP to find sum of all even and odd numbers in given range using array.
 */

 #include<stdio.h>

 int sum(int lowerLimit,int upperLimit);

 int main()
 {
     int lowerLimit,upperLimit;
     printf("\nEnter the value of lower limit :");
     scanf("%d",&lowerLimit);
     printf("\nEnter the value of upper limit :");
     scanf("%d",&upperLimit);

    printf("Sum of even/odd numbers between %d to %d = %d\n", lowerLimit, upperLimit, sum(lowerLimit, upperLimit));
    return 1;

 }

 int sum(int lowerLimit,int upperLimit)
 {
 /* Base condition */
    if(lowerLimit> upperLimit)
        return 0;
    else
        return (lowerLimit + sum(lowerLimit+ 2, upperLimit));
 }
