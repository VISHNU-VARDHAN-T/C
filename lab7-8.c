#include<stdio.h>
int absolute();
int main()
{
	int x;
	printf("Enter the number");
	scanf("%d",&x);
	absolute(x);
}
int absolute(int x)
{
	if(x > 0)
	printf("absolute value is %d\n",x);
	else 
	printf("absolute value is %d\n",x*-1);
}
	
