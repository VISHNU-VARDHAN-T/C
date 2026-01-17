#include<stdio.h>
int main()
{
float a,b,s;
int choice;
 
printf("Enter the values of a and b:\n");
scanf("%f%f",&a,&b);
printf("1:Addition,2:Subtraction,3:Multiplication,4:Division\n");
printf("Enter your choice that need to be performed:\n");
scanf("%d",&choice);
switch (choice)
{
case 1:
s = a+b;
printf("%f\n",s);
break;
case 2:
s = a-b;
printf("%f\n",s);
break;
case 3:
s = a*b;
printf("%f\n",s);
break;
case 4:
s = a/b;
printf("%f\n",s);
break;
default:
printf("INVALID INPUT\n");
}
}
