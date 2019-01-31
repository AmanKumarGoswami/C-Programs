/**
 * WAP to find cube of any number using function.
 */

 #include<stdio.h>

 int cube(int x); //Function declaration

 int main()
 {
     int number;

     printf("\nEnter the number : ");
     scanf("%d",&number);

     printf("\nCube of a number is %d",cube(number)); //Function calling
     return 1;
 }

 int cube(int x) //Called Function
 {
     return x*x*x; //return statement
 }
