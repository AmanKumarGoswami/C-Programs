/**
 * WAP to find maximum and minimum between two numbers using functions.
 */

 #include<stdio.h>

 int isEven(int a);  /// Function Declaration

 int main()
 {
     int x;
     printf("\nEnter the number to be checked : ");
     scanf("%d",&x);

     if(isEven(x))  ///Calling of a function
        printf("%d is even number",x);
    else
        printf("%d is odd number.",x);
     return 1;
 }
 int isEven(int a) /// Definition of a function
 {
     return!(a&1);
 }
