/**
 * WAP to find diameter, circumference and area of circle using functions.
 */
  #include<stdio.h>
  #define pie 3.14  ///Defining a Macro

  double circle(float radius); ///Declaration of a function

 int main()
 {
     float r;
     printf("\nEnter the length of the radius :");
     scanf("%f",&r);
     circle(r); /// Calling of a function
     return 1;
 }

 double circle(float radius) ///Called function
 {
     /// Function definition

     float circumference,area,diameter;
     circumference=2*pie*radius;
     printf("\nCircumference of a circle : %.3f",circumference);
     area=pie*radius*radius;
     printf("\nArea of a circle : %.3f",area);
     diameter=radius*radius;
     printf("\nDiameter of a circle : %.3f",diameter);
     return ;
 }
