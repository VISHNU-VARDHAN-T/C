#include<stdio.h>
void evenOdd();
int main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
   evenOdd(num);
}
void evenOdd( int num)
{
	if(num % 2 ==0)
	printf("%d is even\n",num);
	else
	printf("%d is Odd\n",num);
}
