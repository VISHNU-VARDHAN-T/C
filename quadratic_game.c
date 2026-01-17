#include<stdio.h>
int main()
{
float a,b,c,discriminant;
printf("Enter the value of a:\n");
scanf("%f",&a);
printf("Enter the value of b:\n");
scanf("%f",&b);
printf("Enter the value of c:\n");
scanf("%f",&c);
discriminant = b*b - 4*a*c;
printf("Discriminant:%f\n",discriminant);
if (discriminant > 0)
printf("You have scored 20 points!!\n");
else if (discriminant  == 0)
printf("You have scored 0 points!!\n");
else if (discriminant < 0)
printf("You have scored 10 points!!\n");
}
