/**
 * WAP to find reverse of any number using recursion.
 */
int rev(int);
 #include<stdio.h>
 int main()
 {
     int number;
     printf("Enter the number here : ");
     scanf("%d",&number);
     printf("Reverse of a number is : %d",rev(number));
     return 1;
 }
 int sum=0;
int rev(int n)
{
    int num=n;
    if(n>0)
       {
           num=num%10;
           sum=sum*10+num;
           rev(n/10);
       }
    else
        return sum;
    return sum;

}
