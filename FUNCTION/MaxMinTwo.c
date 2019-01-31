/**
 * WAP to find maximum and minimum between two numbers using functions.
 */

 #include<stdio.h>

 int max(int a,int b);  /// Function Declaration
 int main()
 {
     int x,y;
     printf("\nEnter the value of first number : ");
     scanf("%d",&x);
     printf("\nEnter the value of second number : ");
     scanf("%d",&y);

      /// Here X and Y are the actual perimeter.
      /// The value of X is going to be stored inside a and value of Y inside b.
      /// Where a and b are the formal perimeters.
     if (x==y)
     {
         printf("Both numbers are same : %d",x);
     }
     else
    {
     printf("\n%d is the greatest between two.",max(x,y));  ///Calling of a function max()
    }
     return 1;
 }
 int max(int a,int b) /// Dafenation of a function
 {
     if(a>b)
        return a;
     else
        return b;
 }
