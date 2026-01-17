#include<stdio.h>
int main()
{
float BMI,weight,height;
printf("Enter weight:");
scanf("%f",&weight);
printf("Enter height:");
scanf("%f",&height);
BMI = weight/height;
if (BMI < 18.5)
printf("The person is underweight\n");
else if (BMI > 18.5 && BMI < 24.9)
printf("The person is Normalweight\n");
else if (BMI >= 25)
printf("The person is Overweight\n");
}

