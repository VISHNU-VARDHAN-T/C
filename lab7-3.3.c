#include<stdio.h>
int add(int,int);
int add(int num1,int num2)
{
	int sum = num1+num2;
	return sum;
}
int main()
{
	printf("Sum:%d\n",add(123,456));
	return 0;
}
