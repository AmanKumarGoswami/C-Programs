/**
 * WAP to find frequency of digits.
 */

 #include<stdio.h>
 int main()
 {
     int num, number, temp, i, count=0;
     printf("\nEnter the number : ");
     scanf("%d", &num);
     number = num;
     for(i=0; i<10; i++)
     {
     count = 0;
     num = number;
     while(num>0)
     {
         temp = num % 10;
         if(temp==i)
            count++;
         num = (num-temp)/10;
     }
     printf("\n%d : %d", i, count);
    }
     return 1;
 }
