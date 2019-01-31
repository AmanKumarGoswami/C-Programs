/**
 * WAP to check whether a number is prime, Armstrong or perfect number using function.
 */

 #include<stdio.h>
 #include<math.h>

 int isPrime(int);
 int isPerfect(int);
 int isArmstrong(int);

 int main()
 {
     int number;

     printf("Enter the number to be checked : ");
     scanf("%d",&number);

    if(isPrime(number))
    {
        printf("%d is a prime number.\n",number);
    }
    else
    {
        printf("%d is not a prime number.\n",number);
    }

     if(isPerfect(number))
     {
         printf("%d is a perfect number.\n",number);
     }
     else
     {
         printf("%d is not a perfect number.\n",number);
     }

     if(isArmstrong(number))
     {
         printf("%d is an armstrong number.\n",number);
     }
     else
     {
         printf("%d is not an armstrong number.\n",number);
     }
     return 1;
 }

 int isPrime(int num)
 {
    int i;
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
            return 0;
    }
    return 1;
 }

 int isPerfect(int num)
 {
    int i, sum=0, n;
    n = num;

    for(i=1; i<n; i++)
    {
        /* If i is a divisor of number */
        if(n%i == 0)
        {
            sum += i;
        }
    }

    return (num == sum);
 }

 int isArmstrong(int number)
 {

int lastDigit, sum, originalNum, digits;
    sum = 0;

    originalNum = number;

    /* Find total digits in number */
    digits = (int) log10(number) + 1;

    /*
     * Calculate sum of power of digits
     */
    while(number > 0)
    {
        // Extract the last digit
        lastDigit = number % 10;

        // Compute sum of power of last digit
        sum = sum + round(pow(lastDigit, digits));

        // Remove the last digit
        number = number / 10;
    }

    return (originalNum == sum);
 }
