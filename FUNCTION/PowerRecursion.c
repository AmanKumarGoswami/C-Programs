/**
 * WAP to find power of any number using recursion
 */

 #include<stdio.h>

 int power(int n,int m);

 int main()
 {
     int number,pwr;
     printf("Enter the number : ");
     scanf("%d",&number);
     printf("Enter the number : ");
     scanf("%d",&pwr);
     printf("%d",power(number,pwr));
     return 1;
 }

 int power(int n,int m)  ///Function definition
 {
     int s;
     if(m==1)
        return n;
     else if(m==0)
        return 1;
     else
        s=n*power(n,m-1);  ///Function calling itself
        return s;


 }
