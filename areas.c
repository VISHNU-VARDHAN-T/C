#include<stdio.h>
int main()
{
float a,b,h,l,r;
int choice;
float pi = 3.14,Area;
printf("1=Circle,2=Recatngle,3=Square,4=Triangle\n");
printf("Choose a shape from above\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
if (choice == 1)
printf("Enter the value of radius(r):\n");
scanf("%f",&r);
Area = pi*r*r;
printf("The area is %f units\n",Area);
break;
case 2:
if (choice == 2)
printf("Enter the value of length(l) and breadth(b):\n");
scanf("%f%f",&l,&b);
Area = l*b;
printf("The area is %f units\n",Area);
break;
case 3:
if (choice == 3)
printf("Enter the value of side(a):\n");
scanf("%f",&a);
Area = a*a;
printf("The area is %f units\n",Area);
break;
case 4:
if (choice == 4)
printf("Enter the value of base(b) and height(h):\n");
scanf("%f%f",&b,&h);
Area = 0.5*b*h;
printf("The area is %f units\n",Area);
break;
default:
printf("INVALID INPUT ENTERED");
}															
}

							
