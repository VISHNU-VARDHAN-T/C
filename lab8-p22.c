#include<stdio.h>
float findAverage(int marks[]);
int printarray(int marks[]);
int main()
{float avg;
int marks[5] = {99, 90, 96, 93, 95};
printarray(marks);
printf("program done\n");
return 0;
}
int printarray(int marks[])
{
int i;
float avg;
for (i = 0; i <= 4; i++)
printf("%d\t",marks[i]);
avg=findAverage(marks);
printf("Average marks = %.1f", avg);
printf("average done\n");
}
float findAverage(int marks[])
{
int i;
float sum = 0;
float avg;
for (i = 0; i <= 4; i++) {
sum += marks[i];
}
printf("%f\n",sum);
avg = (sum / 5);
printf("Average marks = %.1f", avg);
printf("%f",avg);
return avg;
}
