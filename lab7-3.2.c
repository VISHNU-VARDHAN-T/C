#include<stdio.h>
void add(int,int);
void add(int num1,int num2)
{
	int sum = num1+num2;
	printf("Sum :%d\n",sum);
}
int main()
{
	add(120,400);
	return 0;
}
