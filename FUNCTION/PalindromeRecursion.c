/**
 * WAP to find reverse of any number using recursion.
 */
int rev(int);
 #include<stdio.h>
 int main()
 {
     int number,num,r;
     printf("Enter the number here : ");
     scanf("%d",&number);
     num=number;
      r=rev(number);
     if (num==r)
        printf("Palindrome");
     else
        printf("not palindrome");
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
