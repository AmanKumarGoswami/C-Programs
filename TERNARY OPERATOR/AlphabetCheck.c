/**
 * WAP to check whether character is an alphabet or not using conditional/ternary operator.
 */

 #include<stdio.h>
 int main()
 {
     char ch;
     printf("Enter the character to be checked : ");
     scanf("%c",&ch);

     (ch>=65&&ch<=90||ch>=97&&ch<=122)?printf("%c is an Alphabet.",ch):printf("%c is  not an Alphabet.",ch);
     return 1;
 }
