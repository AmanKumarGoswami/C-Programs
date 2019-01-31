/**
 * WAP to enter any number and check whether it is Strong number or not.
 */

 #include<stdio.h>
 int main()
 {
     int  num,n,fact,sum=0,i,temp;
     printf("Enter the number to be checked : ");
     scanf("%d",&num);
     n=num;
     while(n>0)
     {
         fact=1;
         temp=n%10;
         for(i=1;i<=temp;i++)
         {
             fact=fact*i;
         }
         sum=fact+sum;
         n=(n-temp)/10;
     }
     if(num==sum)
        printf("%d is Strong number.",sum);
     else
        printf("%d is not a Strong number.",sum);
     return 1;
 }

