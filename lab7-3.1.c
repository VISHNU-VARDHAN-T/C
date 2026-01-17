#include<stdio.h>
int add();
int add()
{
	int num1,num2,sum;
	printf("Enter num1 and num2 :");
	scanf("%d%d",&num1,&num2);
	sum = num1+num2;
	return sum;
}
int main()
{
	printf("Sum:%d\n",add());
	return 0;
}
